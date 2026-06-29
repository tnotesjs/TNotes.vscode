# [0008. VS Code Insiders](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0008.%20VS%20Code%20Insiders)

<!-- region:toc -->

- [1. 概述](#1-概述)
- [2. VS Code Insiders](#2-vs-code-insiders)
- [3. 使用预览版来打开指定文件夹](#3-使用预览版来打开指定文件夹)
- [4. 引用](#4-引用)

<!-- endregion:toc -->

## 1. 概述

- 认识 VS Code Insiders

## 2. VS Code Insiders

- 🤔 什么是 Visual Studio Code Insiders？
  - Visual Studio Code Insiders 是一个 **每日更新的开发预览版**，它包含了即将在正式版（Stable）中发布的最新功能、改进和修复，但可能还不完全稳定，适合喜欢尝鲜或希望提前测试新功能的开发者使用。
  - “Insiders”（内部人员）这个词来源于微软的一种发布策略，意思是这个版本是给那些希望 **更早尝鲜** 的用户（比如开发者、测试人员、早期体验者）使用的。
- 🤔 Insiders 和 Stable 版本可以同时安装吗？
  - 可以。
  - 你可以 **同时安装 Visual Studio Code 的稳定版（Stable）和预览版（Insiders）**，它们是两个独立的版本，**不会互相覆盖**。
  - **程序文件、设置、扩展** 都是相互独立的。
  - 你可以根据需要选择使用哪个版本：
    - 用 `code` 命令启动 Stable 版
    - 用 `code-insiders` 命令启动 Insiders 版
- 🤔 如何查看当前运行的是哪个版本？
  - 在 VS Code 中，点击菜单栏的 `Help > About`（帮助 > 关于），可以看到当前版本信息：
  - Stable 版本号通常是 `1.x.x`
  - Insiders 版本号类似 `1.x.x-insider`
- 🆚 Insiders 和 Stable 版本的区别

| 方面 | Visual Studio Code Stable（正式版） | Visual Studio Code Insiders（预览版） |
| --- | --- | --- |
| 稳定性 | 非常稳定 | 可能存在 Bug |
| 命令行启动命令 | `code` | `code-insiders` |
| 设置和扩展 | 存储在独立路径中 | 不会与 Stable 冲突 |
| 默认安装路径（Windows） | `C:\Program Files\Microsoft VS Code` | `C:\Program Files\Microsoft VS Code Insiders` |
| 更新频率 | 每月更新一次 | 几乎每天更新 |
| 功能 | 已经发布、经过测试的功能 | 包含新功能、实验性功能 |
| 使用建议 | 推荐日常使用 | 推荐尝鲜、测试、不用于生产环境 |

## 3. 使用预览版来打开指定文件夹

```bash
code-insiders . # 打开当前文件夹
code-insiders <file> # 打开指定文件夹
```

## 4. 引用

- https://code.visualstudio.com/insiders/
  - Download Visual Studio Code Insiders
  - Get the latest release each day.
