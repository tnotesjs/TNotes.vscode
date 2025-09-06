# [0003. VS Code 核心组件](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0003.%20VS%20Code%20%E6%A0%B8%E5%BF%83%E7%BB%84%E4%BB%B6)

<!-- region:toc -->

- [1. 📝 概述](#1--概述)
- [2. 📒 VS Code 核心组件](#2--vs-code-核心组件)
  - [2.1. Electron](#21-electron)
  - [2.2. Monaco Editor](#22-monaco-editor)
  - [2.3. TypeScript](#23-typescript)
  - [2.4. Language Server Protocol](#24-language-server-protocol)
  - [2.5. Debug Adapter Protocol](#25-debug-adapter-protocol)
  - [2.6. Xterm.js](#26-xtermjs)
- [3. 🫧 评价](#3--评价)
- [4. 🔗 References](#4--references)

<!-- endregion:toc -->

## 1. 📝 概述

- 了解 VS Code 的一些核心组件。

## 2. 📒 VS Code 核心组件

- VS Code 是一款轻量级但功能强大的源代码编辑器，它由多个核心组件构成，每个组件都负责不同的功能。

| 组件              | 作用                                           |
| ----------------- | ---------------------------------------------- |
| **Electron**      | 提供图形界面与本地系统访问能力以及跨平台的支持 |
| **Monaco Editor** | 核心代码编辑器，提供编辑、高亮、智能提示等功能 |
| **TypeScript**    | VS Code 本身的开发语言，提供强类型与编译支持   |
| **LSP**           | 实现多语言支持，提升代码编辑体验               |
| **DAP**           | 提供统一调试接口，支持多种调试环境             |
| **xterm.js**      | 实现内嵌终端，支持命令行交互                   |

- Electron 是一个开源框架，用于构建跨平台的桌面应用程序。VS Code 使用 Electron 作为其基础，这使得它能够在 Windows、macOS 和 Linux 上运行。Electron 结合了 Chromium 和 Node.js，提供了丰富的 GUI 功能和系统级 API 访问能力。
- Monaco Editor 是 VS Code 内置的代码编辑器，它提供了语法高亮、智能代码补全、代码折叠、差异比较等高级功能。Monaco Editor 基于浏览器运行，性能优异，并且可以单独使用在其他 Web 应用中。
- VS Code 是用 TypeScript 编写的，TypeScript 是 JavaScript 的超集，增加了静态类型检查和其他高级特性。VS Code 深度集成了 TypeScript 的语言服务，提供了出色的代码补全、错误检查和重构功能。
- LSP 是一种标准化协议，允许编辑器或 IDE 与语言服务器通信。语言服务器负责提供语法分析、代码补全、跳转到定义等功能。通过 LSP，VS Code 可以支持多种编程语言，而无需为每种语言单独实现编辑器功能。
- DAP 是调试适配器协议，它标准化了调试器与编辑器之间的通信。VS Code 通过 DAP 支持多种调试工具，开发者可以调试不同语言和环境的代码，而无需关心底层调试器的差异。
- Xterm.js 是一个基于 Web 的终端模拟器，VS Code 使用它来提供集成终端功能。它支持大多数终端功能，如 ANSI 转义序列、文本渲染、鼠标事件等，使得开发者可以在编辑器内直接运行命令行工具。

### 2.1. Electron

- 简介：
  - Electron 是一个使用 **JavaScript、HTML 和 CSS** 构建跨平台桌面应用的框架。它是基于 **Chromium（浏览器引擎）** 和 **Node.js** 的组合。
- 在 VS Code 中的作用：
  - VS Code 使用 Electron 来构建其主界面。
  - 提供 GUI 渲染能力，如菜单栏、窗口管理、文件资源管理器等。
  - 利用 Node.js 实现本地系统交互（如文件读写、进程管理）。
- 特点：
  - 支持 Windows、macOS、Linux 多平台。
  - 可以通过 Web 技术开发原生体验的应用程序。

### 2.2. Monaco Editor

- 简介：
  - Monaco 是 VS Code 中使用的 **Web-based 代码编辑器** 组件，是 VS Code 的“心脏”之一，也是公开的开源项目。
- 主要功能：
  - 语法高亮
  - 智能感知（IntelliSense）
  - 自动补全
  - 错误检查（Diagnostics）
  - 代码折叠、跳转定义、查找引用等高级功能
- 在 VS Code 中的地位：
  - Monaco 是 VS Code 编辑器的核心部分，负责代码编辑区域的渲染和交互。
  - 同时也可以作为独立库嵌入到网页中（例如：[Monaco Editor Playground](https://microsoft.github.io/monaco-editor/playground.html)）

### 2.3. TypeScript

- 简介：
  - TypeScript 是一种由微软开发的 **JavaScript 超集语言**，提供了类型系统、面向对象、模块化等功能，最终编译为 JavaScript 执行。
- 在 VS Code 中的角色：
  - VS Code 本身是使用 TypeScript 开发的，因此对 TypeScript 有原生支持。
  - 提供实时类型检查、智能提示、重构等功能。
  - 集成了 TypeScript Language Server，用于提供语言服务。
- 优势：
  - 提升代码可维护性与团队协作效率。
  - 强类型帮助减少运行时错误。
  - VS Code 对 TypeScript 的支持非常完善，是前端开发的首选工具之一。

### 2.4. Language Server Protocol

- 简介：
  - Language Server Protocol（LSP）是一种通信协议，允许编辑器或 IDE 与语言服务器之间进行标准化通信。
- 定义者：
  - 由 Microsoft 推出并开源，目前已成为行业标准。
- 在 VS Code 中的应用：
  - VS Code 使用 LSP 与各种语言的服务端（如 Python、Java、C++ 等）进行通信。
  - 通过 LSP，VS Code 可以获得代码补全、错误检查、跳转定义、文档大纲等语言相关功能。
- 工作流程：
  1. 编辑器（VS Code）发送请求（如“获取当前符号定义”）。
  2. 语言服务器处理请求并返回结果。
  3. 编辑器展示结果给用户。
- 常见语言服务器：
  - `tsserver`（TypeScript）
  - `pyright` 或 `pylance`（Python）
  - `clangd`（C/C++）
  - `gopls`（Go）

### 2.5. Debug Adapter Protocol

- 简介：
  - Debug Adapter Protocol（DAP）是由 Microsoft 提出的一种调试通信协议，用于在调试器（如 VS Code）和调试后端（如 GDB、Chrome DevTools、JVM 调试器）之间建立统一接口。
- 在 VS Code 中的作用：
  - 允许开发者通过配置 `.vscode/launch.json` 文件启动调试会话。
  - 支持断点设置、变量查看、单步执行、调用栈分析等调试功能。
  - 适配多种语言和运行环境（如 Node.js、Python、Java、C++ 等）。
- 工作机制：
  - VS Code 作为调试客户端。
  - Debug Adapter 作为中间桥梁，将 DAP 请求转换为目标调试器的指令。
  - 调试器执行操作并将状态反馈回编辑器。

### 2.6. Xterm.js

- 简介：
  - Xterm.js 是一个基于 Web 的终端模拟器，可以在网页中嵌入命令行终端。
- 在 VS Code 中的应用：
  - VS Code 内置的终端（Terminal）就是基于 xterm.js 实现的。
  - 支持命令行输入输出、颜色显示、光标控制、快捷键等终端功能。
  - 可以运行 Shell（如 bash、zsh、PowerShell）并与操作系统交互。
- 功能亮点：
  - 支持主流终端特性（如 ANSI 颜色、光标闪烁、滚动条等）。
  - 可定制主题、字体、快捷键等。
  - 支持扩展插件增强功能（如搜索、标签页等）。

## 3. 🫧 评价

- 发现其中好多技术栈在工作中都多少接触过，这里简单记录一下。
- Xterm.js
  - 在第一份工作（实习）中，需要实现一个在线的 Web 终端，用过这玩意儿。
- Electron、TypeScript
  - 在第二份工作中，需要实现一个桌面端应用程序 —— 一个自能收银系统，用到了 TYPEORM、Electron 等技术栈。
  - 在第三份工作中，需要实现一个游戏工具库（为游戏制作流程赋能的一个客户端程序，旨在降低策划、美术、开发的工作量），比如美术工具 - 导表工具、平台数据分析 - 工具使用量统计工具，美术工具 - xxx 等，也用到了 Electron、TypeScript 等技术栈。
- Monaco Editor
  - 在第四份工作中（当前 `25.07` 的工作），需要实现一个在线的代码编辑器，用到了这玩意儿，集成起来非常简单，官方提供的说明文档也很友好。

## 4. 🔗 References

- https://microsoft.github.io/monaco-editor/playground.html
  - Monaco Editor Playground
