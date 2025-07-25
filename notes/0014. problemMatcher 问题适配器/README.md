# [0014. problemMatcher 问题适配器](https://github.com/Tdahuyou/TNotes.vscode/tree/main/notes/0014.%20problemMatcher%20%E9%97%AE%E9%A2%98%E9%80%82%E9%85%8D%E5%99%A8)

<!-- region:toc -->

- [1. 📝 概述](#1--概述)
- [2. 📒 problemMatcher 是什么](#2--problemmatcher-是什么)
- [3. 📒 problemMatcher 的作用](#3--problemmatcher-的作用)
- [4. 📒 problemMatcher 都有那些类型](#4--problemmatcher-都有那些类型)
- [5. 📒 预定义的问题匹配器](#5--预定义的问题匹配器)
- [6. 💻 `"problemMatcher": []`](#6--problemmatcher-)
- [7. 💻 `"problemMatcher": ["$tsc"]`](#7--problemmatcher-tsc)
- [8. 🔗 References](#8--references)

<!-- endregion:toc -->

## 1. 📝 概述

- 理解任务中的 problemMatcher 配置

## 2. 📒 problemMatcher 是什么

- 先从字面上来理解：
  - problem 表示“问题”
  - matcher 表示“匹配器”
  - 两者一起 `problemMatcher` 就表示“问题匹配器”
- 🤔 `problemMatcher` 是什么
  - `problemMatcher` 是 VS Code 任务配置文件 `tasks.json` 中的一个配置字段。
- 🤔 在 `tasks.json` 中，`problemMatcher` 配置有啥用？
  - 在 Visual Studio Code（VSCode）中，`tasks.json` 文件用于定义项目中的自定义任务（如编译、构建、测试等）。其中的 `problemMatcher` 是一个非常重要的配置项，它的作用是 **从任务的输出中提取错误、警告等信息，并在 VSCode 的“问题”面板中显示出来**，从而帮助开发者快速定位代码中的问题。
  - `problemMatcher` 是 VS Code 中用于在任务执行时 **识别控制台输出中的错误和警告信息** 的配置项。
  - `problemMatcher` 会根据预定义或自定义的规则，将任务输出中的文本 **匹配为“问题”（错误或警告）**，并展示在“问题”面板中，同时在编辑器中高亮显示相关代码位置（如果匹配到文件和行号）。
- 🤔 如何匹配？
  - 1️⃣ 可以自定义，手写正则来匹配。
  - 2️⃣ 可以使用内置的问题匹配器来匹配，相当于用 VSCode 已经写好的匹配规则来匹配。
  - 原理简述：任务的执行就如同 Shell 命令的执行，会有对应的输出，比如 stdout 或 stderr，这些字符串信息 VS Code 会去收集，并使用 `problemMatcher` 来解析。在手写 `problemMatcher` 的时候，可以自定义 `problemMatcher.pattern.regexp` 正则表达式，比如 `^([^\\s].*)\\((\\d+),(\\d+)\\):\\s+(error|warning|info)\\s+(.*)$`，这个表达式有多个捕获组，这些捕获组可作为下面这些问题信息的占位符使用：
    - `problemMatcher.pattern.file`
    - `problemMatcher.pattern.line`
    - `problemMatcher.pattern.line`
    - `problemMatcher.pattern.column`
    - `problemMatcher.pattern.severity`
    - `problemMatcher.pattern.message`
  - VS Code 会将这些捕获组中的内容替换成对应的占位符来组合错误消息。

## 3. 📒 problemMatcher 的作用

- 当你运行一个构建任务（比如使用 `gcc` 编译 C 程序、`tsc` 编译 TypeScript、`eslint` 检查代码等），编译器或工具通常会在终端输出错误或警告信息。`problemMatcher` 的作用就是：
- **1️⃣ 自动识别错误和警告，并将这些信息汇总显示到“问题”面板中。**
  - 监听任务的输出（stdout 或 stderr）
  - 使用正则表达式匹配输出中的错误/警告信息
  - 将这些信息转换为 VSCode 可识别的“问题”（Problems）显示在 **Problems 面板** 中
- **2️⃣ 支持跳转到出错文件和行号，提升调试效率。**
  - 点击可以直接跳转到对应文件的对应行

## 4. 📒 problemMatcher 都有那些类型

- 为空数组，表示不匹配任何问题，即便任务运行出现了错误，也不会提示任何消息。
- 为预设的问题匹配器，比如 `$tsc`，表示任务被执行时，VS Code 会尝试从输出中提取 TypeScript 错误信息。
- 为自定义的问题匹配器，查阅官方文档自行配置匹配规则，通过正则来匹配。

## 5. 📒 预定义的问题匹配器

- VS Code 提供了一些预定义的问题匹配器，例如：

| 匹配器名称   | 用途                  |
| ------------ | --------------------- |
| `$tsc`       | TypeScript 编译器错误 |
| `$eslint`    | ESLint 报错           |
| `$gcc`       | C/C++ 编译器报错      |
| `$msCompile` | Microsoft 编译器报错  |
| `$jshint`    | JSHint 报错           |

## 6. 💻 `"problemMatcher": []`

::: code-group

```json [./vscode/tasks.json]
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "打印 hello world",
      "type": "shell",
      "command": "echo hello world",
      "problemMatcher": []
    }
  ]
}
```

:::

- `"problemMatcher": []`
  - `"problemMatcher": []` 的作用是：**告诉 VS Code，不要扫描这个任务的输出内容中的错误和警告信息**。
  - 如果你明确不希望某个任务输出错误信息，推荐主动设置 `"problemMatcher": []`。
- 如果不填写 problemMatcher 字段，那么默认会在执行该任务的时候弹出一个选择对话框
  - ![图 1](https://cdn.jsdelivr.net/gh/Tdahuyou/imgs@main/2025-07-24-08-05-35.png)

## 7. 💻 `"problemMatcher": ["$tsc"]`

::: code-group

```json [./vscode/tasks.json]
{
  "label": "tn:build",
  "type": "shell",
  "command": "npm run tn:build",
  "problemMatcher": ["$tsc"]
}
```

:::

- `"problemMatcher": ["$tsc"]` 使用 `$tsc` 匹配 TypeScript 错误，当 `tn:build` 命令执行时，VS Code 会尝试从输出中提取 TypeScript 错误信息。

## 8. 🔗 References

- https://code.visualstudio.com/docs/debugtest/tasks
  - VSCode tasks
