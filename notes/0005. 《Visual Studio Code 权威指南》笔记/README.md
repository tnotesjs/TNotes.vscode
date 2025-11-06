# [0005. 《Visual Studio Code 权威指南》笔记](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0005.%20%E3%80%8AVisual%20Studio%20Code%20%E6%9D%83%E5%A8%81%E6%8C%87%E5%8D%97%E3%80%8B%E7%AC%94%E8%AE%B0)

<!-- region:toc -->

- [1. 🎯 本节内容](#1--本节内容)
- [2. 🫧 评价](#2--评价)
- [3. 📝 笔记大纲](#3--笔记大纲)
  - [3.1. 🎯 第 1 章 如何学习 Visual Studio Code](#31--第-1-章-如何学习-visual-studio-code)
    - [学会搜索](#学会搜索)
    - [学会提问](#学会提问)
    - [学会学习](#学会学习)
  - [3.2. 🎯 第 2 章 Visual Studio Code 简介](#32--第-2-章-visual-studio-code-简介)
    - [Visual Studio Code 概览](#visual-studio-code-概览)
    - [Visual Studio Code 简史](#visual-studio-code-简史)
    - [Visual Studio Code 的优势](#visual-studio-code-的优势)
    - [Visual Studio Code 开发团队](#visual-studio-code-开发团队)
    - [Visual Studio Code 是如何做开源的](#visual-studio-code-是如何做开源的)
  - [3.3. 🎯 第 3 章 核心组件](#33--第-3-章-核心组件)
    - [Electron](#electron)
    - [Monaco Editor](#monaco-editor)
    - [TypeScript](#typescript)
    - [Language Server Protocol](#language-server-protocol)
    - [Debug Adapter Protocol](#debug-adapter-protocol)
    - [Xterm.js](#xtermjs)
  - [3.4. 🎯 第 4 章 安装与配置](#34--第-4-章-安装与配置)
    - [概览](#概览)
    - [Linux](#linux)
    - [macOS](#macos)
    - [Windows](#windows)
  - [3.5. 🎯 第 5 章 快速入门](#35--第-5-章-快速入门)
    - [Visual Studio Code Insiders](#visual-studio-code-insiders)
    - [设置](#设置)
    - [用户界面](#用户界面)
    - [编辑功能](#编辑功能)
    - [主题](#主题)
    - [快捷键](#快捷键)
    - [集成终端](#集成终端)
    - [中文显示](#中文显示)
  - [3.6. 🎯 第 6 章 进阶应用](#36--第-6-章-进阶应用)
    - [命令行](#命令行)
    - [IntelliSense](#intellisense)
    - [Code Navigation 代码导航](#code-navigation-代码导航)
    - [玩转 Git](#玩转-git)
    - [打造自己的主题](#打造自己的主题)
    - [快速创建可复用的代码片段](#快速创建可复用的代码片段)
    - [Task，把重复的工作自动化](#task把重复的工作自动化)
    - [Multi-root Workspaces](#multi-root-workspaces)
    - [调试与运行](#调试与运行)
  - [3.7. 🎯 第 7 章 插件](#37--第-7-章-插件)
    - [插件市场](#插件市场)
    - [插件管理](#插件管理)
    - [那些不错的插件](#那些不错的插件)
  - [3.8. 🎯 第 8 章 语言深入](#38--第-8-章-语言深入)
    - [概览](#概览)
    - [Python](#python)
    - [JavaScript](#javascript)
    - [TypeScript](#typescript)
    - [Java](#java)
    - [C\#](#c)
    - [C/C++](#cc)
    - [Go](#go)
    - [更多语言支持](#更多语言支持)
  - [3.9. 🎯 第 9 章 前端开发](#39--第-9-章-前端开发)
    - [HTML](#html)
    - [CSS、SCSS 和 Less](#cssscss-和-less)
    - [Emmet](#emmet)
    - [React](#react)
    - [Angular](#angular)
    - [Vue](#vue)
    - [前端插件推荐](#前端插件推荐)
  - [3.10. 🎯 第 10 章 云计算开发](#310--第-10-章-云计算开发)
    - [微软 Azure](#微软-azure)
    - [AWS](#aws)
    - [Google Cloud Platform](#google-cloud-platform)
    - [阿里云](#阿里云)
    - [腾讯云](#腾讯云)
  - [3.11. 🎯 第 11 章 物联网开发](#311--第-11-章-物联网开发)
    - [设备端开发](#设备端开发)
    - [设备上云](#设备上云)
    - [设备模拟](#设备模拟)
    - [边缘计算](#边缘计算)
    - [物联网插件推荐](#物联网插件推荐)
  - [3.12. 🎯 第 12 章 远程开发](#312--第-12-章-远程开发)
    - [远程开发概览](#远程开发概览)
    - [远程开发插件](#远程开发插件)
    - [SSH](#ssh)
    - [容器](#容器)
    - [WSL](#wsl)
  - [3.13. 🎯 第 13 章 Visual Studio family](#313--第-13-章-visual-studio-family)
    - [Visual Studio、Visual Studio Code、Visual Studio Codespaces，你都分清楚了吗](#visual-studiovisual-studio-codevisual-studio-codespaces你都分清楚了吗)
    - [Visual Studio Codespaces](#visual-studio-codespaces)
    - [Visual Studio Live Share](#visual-studio-live-share)
    - [Visual Studio IntelliCode](#visual-studio-intellicode)
  - [3.14. 🎯 第 14 章 成为 Visual Studio Code 的贡献者](#314--第-14-章-成为-visual-studio-code-的贡献者)
    - [GitHub Issues](#github-issues)
    - [提问](#提问)
    - [讨论](#讨论)
    - [GitHub Pull requests](#github-pull-requests)
    - [插件](#插件)
    - [翻译](#翻译)
  - [3.15. 🎯 第 15 章 插件开发](#315--第-15-章-插件开发)
    - [如何打造一款优秀的 Visual Studio Code 插件](#如何打造一款优秀的-visual-studio-code-插件)
    - [你的第一个 Visual Studio Code 插件](#你的第一个-visual-studio-code-插件)
    - [Visual Studio Code 插件的扩展能力](#visual-studio-code-插件的扩展能力)
    - [插件开发面面观](#插件开发面面观)
    - [插件开发的生命周期](#插件开发的生命周期)

<!-- endregion:toc -->

## 1. 🎯 本节内容

- 《Visual Studio Code 权威指南》学习笔记草稿

## 2. 🫧 评价

这篇笔记记录了《Visual Studio Code 权威指南》的学习笔记大纲，根据书中的目录结构并结合着 vscode 官方文档快速过一遍 vscode 的相关内容，做一些简短的记录。

重点：《Visual Studio Code 权威指南》第 5、6 章

备注：从第 7 章开始到结尾的内容还没看，感觉帮助不大。

## 3. 📝 笔记大纲

### 3.1. 🎯 第 1 章 如何学习 Visual Studio Code

没啥干货。

这一章提到 vscode 的内容非常多，本书无法讲解完全。因此，在第一章，特地讲讲如何学习 vscode，授人以鱼不如授人以渔，若在学习 vscode 的过程中遇到了问题，可以自行查阅相关资料来解决。

#### 学会搜索

- Google
- stack overflow
- bing
- vscode 官网：https://code.visualstudio.com/
- vscode github：https://github.com/microsoft/vscode
- vscode github Issues：https://github.com/microsoft/vscode/issues

#### 学会提问

- 先自行查阅资料
- 确实没有解决方案，可考虑向 github 提 Issues，注意描述要详细一些，比如必要的截图，软件版本等，以便尝试帮你解决问题的人能更好的理解你的问题，复现你的问题。

#### 学会学习

- “师者，所以传道授业解惑也。”
  - 顺序：传道 -> 授业 -> 解惑
  - 传道 -> 学会学习
- 自己的思考
- 知其然知其所以然
- 举一反三

### 3.2. 🎯 第 2 章 Visual Studio Code 简介

这一章是对 VSCode 的简单介绍。

Visual Studio Code 是一款免费且开源的现代化轻量级代码编辑器，支持几乎所有主流开发语言的语法高亮、智能代码补全、自定义快捷键、括号匹配和颜色区分、代码片段提示、代码对比等特性，也拥有对 Git 的开箱即用的支持。同时，它还支持插件扩展，通过丰富的插件，用户能获得更多高效的功能。

#### Visual Studio Code 概览

- 跨平台
- IntelliSense（智能提示）
- 代码调试
- 内置的 Git 支持

#### Visual Studio Code 简史

- 2015 年 4 月 29 日，在微软 Build 2015 大会上，微软发布了 Visual Studio Code 的第一个预览版本。
- 2015 年 11 月 18 日，微软的 Visual Studio Code 团队将 Visual Studio Code 在 GitHub 上开源，并采用 MIT 许可证，同时宣布将支持插件机制。
- 2016 年 4 月 14 日，Visual Studio Code 正式版发布，版本号为 1.0.0。
- 2017 年 11 月 15 日，在微软 Connect()；2017 大会上，微软宣布 Visual Studio Code 的月活跃用户达到了 260 万。
- 2018 年 5 月 7 日，在微软 Build 2018 大会上，微软发布了 Visual Studio Live Share 插件，使得开发者可以在 Visual Studio Code 或 Visual Studio IDE 中进行实时的协同开发和调试。
- 2018 年 9 月 10 日，微软发布了 GitHub Pull requests 插件，使得开发者可以在 Visual Studio Code 中轻松审查和管理 GitHub Pull requests。这也是微软在收购 GitHub 后，Visual Studio Code 团队和 GitHub 团队一次非常良好的合作。
- 2019 年 5 月 2 日，在 PyCon 2019 大会上，微软发布了 Visual Studio Code Remote Development，以便帮助开发者在容器、物理或虚拟机，以及 Windows Subsystem for Linux（WSL，适用于 Linux 的 Windows 子系统）中实现无缝的远程开发。
- 2019 年 11 月 4 日，在微软 Ignite 2019 大会上，微软正式发布了 Visual Studio Online，一个由云服务支撑的开发环境。除了支持通过浏览器连接到 Visual Studio Online 云开发环境，还支持通过 Visual Studio Code 和 Visual Studio 来连接。

#### Visual Studio Code 的优势

- 在 stack overflow 上，是排名第一的 IDE，最受开发者欢迎。
- 学习成本低
- 用户体验好
- 性能优异
  - vscode > atom
  - vscode < vim、sublime
- 丰富的插件库
  - https://marketplace.visualstudio.com/vscode
  - ![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-13-22-56-34.png)
- 强大的生态
  - Visual Studio Code 把它的许多重要组件抽离出来，使其成为大家都可以复用的开源产品，并与社区合作，把产品越做越好。
  - Language Server Protocol(LSP)
  - Debug Adapter Protocol(DAP)
  - Monaco Editor
  - Visual Studio Live Share
  - Visual Studio IntelliCode

#### Visual Studio Code 开发团队

- Erich Gamma
  - Visual Studio Code 的总负责人兼总设计师是 Erich Gamma
  - 《设计模式：可复用面向对象软件的基础》 —— 这本书从头到尾就是在教你如何从零开始打造一个文本编辑工具
- 开发团队中，有一部分是曾经 Eclipse 的开发者。

#### Visual Studio Code 是如何做开源的

- 开放源码
- 积极响应社区的 Issues 和 PR
- 产品计划、设计规划开源
- 抽离核心组件开源

### 3.3. 🎯 第 3 章 核心组件

这一章介绍的是 VSCode 的核心组件，能够帮你快速了解 VSCode 的基本组成。

#### Electron

- Electron 以 Node.js 作为运行时(runtime)，以 Chromium 作为渲染引擎，使开发者可以使用 HTML、CSS 和 JavaScript 这样的前端技术栈来开发跨平台桌面 GUI 应用程序。

#### Monaco Editor

- Monaco Editor 是一个基于浏览器的代码编辑器，支持业界主流的浏览器：IE 11、Edge、Chrome、Firefox、Safari 和 Opera。
- 它包含了一个编辑器所需要的众多功能：智能提示、代码验证、语法高亮、代码片段、代码格式化、代码跳转、键盘快捷键、文件比较等。

#### TypeScript

- TypeScript 是 JavaScript 的严格超集。
- TypeScript 的设计目标就是开发大型应用，解决开发者在使用 JavaScript 进行开发的过程中的痛点。

#### Language Server Protocol

- 语言服务器（Language Server）提供了诸如自动补全、定义跳转、代码格式化等与编程语言相关的功能。
- Language Server Protocol（LSP）是编辑器/IDE 与语言服务器之间的一种协议，通过 JSON-RPC 传输消息，可以让不同的编辑器/IDE 方便嵌入各种编程语言，使得开发人员能在最喜爱的工具中使用各种语言来编写程序。
- LSP 最初只是为 Visual Studio Code 而开发的。到了 2016 年 6 月 27 日，微软宣布与 Red Hat 和 Codenvy 一起合作，标准化了 Language Server Protocol 的规范。如今，众多主流语言都已经有了相应的 Language Server，许多编辑器/IDE 也都支持了 LSP，包括 Visual Studio Code、Visual Studio、Eclipse IDE、Eclipse Che、Eclipse Theia、Atom、Sublime Text、Emacs、Qt Creator 等。
- ![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-14-20-04-32.png)

#### Debug Adapter Protocol

- Debug Adapter Protocol（DAP） 是一种调试通信协议 ，由 Microsoft 提出并开源，用于在 编辑器/IDE（如 VS Code） 和 调试后端（如调试器、运行时环境） 之间建立统一的通信接口。
- 背景：传统的调试方式中，每种语言或平台都需要编辑器单独集成对应的调试逻辑，导致开发复杂、维护困难。
- 目标：让一个编辑器可以通过统一的方式支持多种语言和调试器。
  - 编辑器只需实现一次 DAP 客户端。
  - 每种语言只需提供一个遵循 DAP 规范的“适配器”（Adapter）。
  - 这样就可以轻松支持多种语言和调试器。

对比 DAP 之前和之后：

::: swiper

![DAP 之前](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-14-20-17-37.png)

![DAP 之后](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-14-20-18-01.png)

:::

示例：`.vscode/launch.json`：

![图 2](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-14-20-13-27.png)

- `"type"` 表示使用哪种 Debug Adapter。
- VS Code 会根据这个类型启动相应的适配器并与之通信。

工作原理（在 VS Code 中）：

1. 用户操作：
   - 用户点击“启动调试”按钮。
   - VS Code 读取 `.vscode/launch.json` 配置文件中的调试配置。
2. VS Code 向 Debug Adapter 发送请求：
   - 如：启动调试会话、设置断点、继续执行等。
3. Debug Adapter 转发给实际调试器：
   - Adapter 将 DAP 请求转换为调试器能理解的命令。
   - 例如：将“设置断点”的请求翻译成 GDB 或 V8 引擎的命令。
4. 调试器执行并返回结果：
   - 结果通过 Adapter 返回给 VS Code。
   - VS Code 显示变量值、调用栈、暂停状态等信息。

more info：

- Debug Adapter Protocol 官方文档 -> https://microsoft.github.io/debug-adapter-protocol/
- VS Code Debugging 文档 -> https://code.visualstudio.com/docs/debugtest/debugging

#### Xterm.js

- Xterm.js 是一个使用 TypeScript 开发的前端组件，它把完整的终端功能带入了浏览器。
- Xterm.js 可以与 Electron 开发的应用进行无缝集成，而 Visual Studio Code 又是基于 Electron 开发的，所以 Visual Studio Code 的集成终端可以方便地基于 Xterm.js 进行开发。
- 无论是 CMD、PowerShell、WSL、bash、sh、zsh，还是其他终端，用户都可以直接在 Visual Studio Code 中自由使用，而不用在 Visual Studio Code 和其他终端应用之间进行来回切换。

### 3.4. 🎯 第 4 章 安装与配置

直接到官方文档下载即可，下面是下载链接：

https://code.visualstudio.com/download

#### 概览

跳过...

#### Linux

跳过...

#### macOS

跳过...

#### Windows

跳过...

### 3.5. 🎯 第 5 章 快速入门

这一章是重点，介绍的是 VSCode 的基本使用。

#### Visual Studio Code Insiders

- Visual Studio Code 每个月都会发布一个新版本，我们称之为稳定版。
- 除了稳定版，Visual Studio Code 还提供了一个 Insiders 版本。Insiders 版本与稳定版的最大区别就是更新周期。稳定版每个月更新一次，而 Insiders 版本每天都会更新。
- Insiders 版本的用户可以更快地获取到最新的功能及 bug 修复，而不用等待一个月的时间。这很适合喜欢尝鲜的用户。此外，Insiders 版本还有一个好处，它可以与稳定版在同一台机器上并存，而且用户配置、颜色主题、快捷键设置、插件等都是相互独立的。
- Insiders 版缺点：测试没有稳定版全面，在体验最新功能的同时，也可能会遇到最新的 bug。

#### 设置

- 根据不同的作用范围分类：
  - 用户设置(User Settings)：这是一个全局范围的设置，会应用到所有的 Visual Studio Code 实例中。
  - 工作区设置(Workspace Settings)：设置被保存在相应的工作区，只会对相应的工作区生效。工作区设置会覆盖用户设置。此外，工作区设置对于团队成员分享项目的设置也是十分有用的。一般来说，工作区设置的设置文件也会被提交到版本控制工具（如 Git）中去。
- 早期设置方式：
  - JSON 文件
- 现在的设置方式：
  - JSON 文件 - 搬运配置更快
  - 图形化配置界面 - 可视化交互更有好
- 通过配置文件来配置：
  - 可以通过 ctrl shift p 搜索 `Preferences: Open User Settings` 快速打开用户设置文件
  - ![图 6](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-14-20-32-03.png)
- 图形化配置界面：
  - 可以通过 `cmd ,`（macos）、`ctrl ,`（Windows）快速打开设置页面
  - ![图 5](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-14-20-27-05.png)

#### 用户界面

- https://code.visualstudio.com/docs/getstarted/userinterface
- 基本布局
  - 编辑器：这是主要的代码编辑区域。你可以多列或多行地打开多个编辑器。
  - 侧边栏：位于左侧的侧边栏包含了资源管理器、搜索、代码过滤器、调试与运行、插件这 5 个基本视图。
  - 状态栏：显示当前打开的文件、项目及其他信息。
  - 面板：编辑器的下方可以展示不同的面板，包括显示输出和调试信息的面板、显示错误信息的面板、集成终端和调试控制台面板。面板也可以被移动到编辑器的右侧。
- 命令面板
  - Visual Studio Code 的设计初衷之一，就是希望解放大家的鼠标，使所有的操作都能通过键盘进行。通过命令面板，我们就能做到这一点。
  - 通过 Ctrl+Shift+P 快捷键，可以快速打开命令面板。
  - 常用命令的键盘快捷键
    - `Ctrl+P`：文件跳转。
      - 等效于 `Ctrl+E`
    - `Ctrl+Shift+Tab`：在所有打开的文件中跳转。
    - `Ctrl+Shift+P`：打开命令面板。
    - `Ctrl+Shift+O`：跳转到文件中的符号。
    - `Ctrl+G`：跳转到文件中的某一行。
- 并排编辑
  - 通过菜单：
    - ![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-15-20-34-33.png)
  - 通过快捷方式：
    - 按住 Alt 快捷键，同时单击资源管理器的文件。
    - 通过 Ctrl+\ 快捷键来把当前编辑器分为两个。
    - 在资源管理器的文件上单击右键，在弹出的快捷菜单（后面将这类菜单简称为右键菜单）中选择 Open to the Side，或者使用键盘上的 Ctrl+Enter 快捷键。
    - 单击编辑器右上角的 Split Editor 按钮。
    - 通过拖曳，把当前文件移动到任意一侧。
    - 使用 Ctrl+P 快捷键调出文件列表，选择需要打开的文件，然后按下 Ctrl+Enter 快捷键（在 macOS 上是 Cmd+Enter 快捷键）​。
  - 通过配置：`workbench.editor.openSideBySideDirection`
    - 配置控制编辑器在并排打开时（例如从资源管理器）出现的默认位置。
    - `"right"` 默认在当前活动编辑器右侧打开。
    - `"down"` 若更改为 "down"，则在当前活动编辑器下方打开。
  - 当你需要打开多个编辑器时，可以在按下 Ctrl 快捷键（在 macOS 上是 Cmd 快捷键）的同时，按下 1、2、3 或 4 键来快速地在不同编辑器之间进行切换。
- 缩略图
  - 位于编辑器右侧的缩略图可以使你预览全局，并帮助你快速地在当前文件中进行跳转。
  - 配置：
    - `editor.minimap.side`
      - 配置缩略图的位置
      - `right` 右侧，默认值
      - `left` 左侧
    - `editor.minimap.autohide`
      - 配置缩略图是否自动隐藏
      - `false` 不自动隐藏，默认值
      - `true` 自动隐藏
    - `editor.minimap.enabled`
      - 配置是否显示缩略图
      - `true` 显示，默认值
      - `false` 不显示
    - ……
- 面包屑导航
  - 编辑器上方的导航栏被称为面包屑导航(Breadcrumbs)。
  - 面包屑导航能显示当前的位置，使你可以快速地跳转到不同的文件夹、文件或符号。
  - 配置：
    - `breadcrumbs.enabled`
      - 启用/禁用导航路径。
      - `true` 启用，默认值
      - `false` 禁用
- 文件资源管理器
  - 文件资源管理器用来浏览和管理项目中的所有文件和文件夹。
  - 打开目录所在位置
    - 你可以通过文件或文件夹的右键菜单快速定位到所选文件或文件夹在系统原生文件资源管理器中的位置。
    - Windows:Reveal in Explorer
    - macOS:Reveal in Finder
    - Linux:Open Containing Folder
  - 隐藏文件
    - 默认情况下，Visual Studio Code 会在文件资源管理器中隐藏一些文件夹（如.git 文件夹）​。
    - 可以通过 `files.exclude` 来配置要被隐藏的文件和文件夹。
    - glob 模式：https://code.visualstudio.com/docs/editor/glob-patterns
    - ![图 3](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-15-23-45-39.png)
  - 多选：
    - 在文件资源管理器中，你可以同时选中多个文件进行操作。
    - 按住 Ctrl 快捷键（在 macOS 上是 Cmd 快捷键）​，可以再次选择单个文件。
    - 按住 Shift 快捷键，可以选择一个范围内的多个文件。
  - 比较：
    - 如果你选择了两个文件，那么可以在文件的右键菜单中单击 Compare Selected 来快速比较两个文件。
  - 搜索过滤：
    - 您可以在资源管理器视图中筛选文件和文件夹。
    - 聚焦资源管理器视图时，按下 ⌥⌘F 打开查找控件，输入目标文件/文件夹名称的部分字符即可匹配。
    - ![图 1](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-15-23-18-14.png)
  - 大纲视图：
    - 大纲视图是资源管理器视图底部的一个独立区域。展开后，它会显示当前活动编辑器的符号树状结构。
    - ![图 2](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-15-23-24-04.png)
    - 支持搜索：`⌥⌘F`
    - 配置：`outline.xxx`
    - 可配置大纲视图中各种符号信息是否显示。
- 禅模式 zen mode
  - 禅模式通过隐藏除编辑器外的所有用户界面元素，将 VS Code 切换至全屏状态并居中编辑器，助您专注于代码编写。
  - 可使用快捷键 `⌘K Z` 来启用该模式
  - 双击 Esc 键即可退出禅模式
  - 若需禁用全屏过渡效果，可通过 `zenMode.fullScreen` 进行设置。
- 标签页 Tabs
  - VS Code 在编辑器上方的标题区域以标签页形式显示已打开的项目。当您打开文件时，系统会为该文件新增一个标签页。通过标签页可快速在不同项目间切换。
  - 您可以通过拖放操作重新排列标签页顺序。若需同时对多个标签页执行操作，请按住 Ctrl 键（macOS 系统为 Cmd 键）并选择目标标签页。如需选择连续范围内的标签页，按住 Shift 键后选择该范围的起始和结束标签页即可。
  - 标签页有很多配置 `workbench.editor.xxx`，比如是否启用标签页，标签页的最大数量，标签页是否支持换行显示，自定义标签页显示的内容等等。
- 窗口管理
  - `window.openFoldersInNewWindow`
    - 控制打开文件夹时是在新窗口打开还是替换上一个活动窗口。
    - VS Code 会根据打开请求的来源上下文决定是重用窗口还是开启新窗口。将其切换为 on 或 off 可始终保持相同行为。例如，若您认为从文件菜单选取文件或文件夹时始终应在新窗口中打开，请将此设置为 on 。
  - `window.restoreWindows`
    - window.restoreWindows 设置用于告知 VS Code 如何恢复之前会话中打开的窗口。
    - 默认情况下，VS Code 会恢复你在之前会话中处理过的所有窗口（设置： all ）。将此设置更改为 none 可永不重新打开任何窗口，始终以空白的 VS Code 实例启动。
    - 更改为 one 可重新打开你上次处理的窗口，或更改为 folders 仅恢复那些曾打开过文件夹的窗口。

#### 编辑功能

- https://code.visualstudio.com/docs/editing/codebasics
- 多光标
  - Multiple selections (multi-cursor)
  - VS Code 支持多光标同步快速编辑。通过 `Alt+点击` 可添加次级光标（显示较细）。每个光标会根据所处上下文独立操作。
  - 常用添加方式是通过 `⌥⌘↓` 或 `⌥⌘↑` 在下方或上方插入新光标。
  - 第一次按下 `Ctrl+D` 快捷键，会选择当前光标处的单词。再次按下 `Ctrl+D` 快捷键，会在下一个相同单词的位置添加一个新的光标。
  - 按下快捷键 `Ctrl+Shift+L`，会在当前光标处的单词所有出现的位置，都添加新的光标。
- 列选择
  - 把光标放在要选择的区域的左上角，按住 `Shift+Alt` 快捷键，然后把光标拖至右下角，就完成了对文字的列选择。
  - 也可以按下鼠标中键拖动选择。
- 自动保存
  - File → Auto Save
  - `files.autoSave` 配置自动保存的模式
  - `files.autoSaveDelay` 配置自动保存的延迟时间
- 热退出
  - 作用：保留未保存更改、恢复编辑器状态、提升工作效率。
- 搜索
  - 按下 ⌘F 即可在编辑器中打开查找控件并输入搜索字符串。搜索结果会在编辑器、概览标尺和缩略图中高亮显示。
  - 搜索选项：
    - 区分大小写
    - 全字匹配
    - 正则表达式匹配
  - 支持搜索替换
  - 长度可自由拖拽
  - 支持跨文件搜索
  - 支持在选中的内容中进行搜索
  - 支持将搜索结果独立到视图中，且视图可编辑
- 智能提示 IntelliSense
  - 编写代码键入内容时，根据输入的内容生成智能提示。
  - https://code.visualstudio.com/docs/editing/intellisense
- 代码格式化
  - shift + alt + f
  - 格式化选定内容：ctrl + k、ctrl + f
  - `editor.formatOnSave` 保存时自动格式化
  - `editor.formatOnType` 在键入一新行后自动格式化旧行
  - `editor.formatOnSaveMode` 配置保存后自动格式化的模式 - 可控制在保存时设置格式是设置整个文件格式还是仅设置修改内容的格式。
- 代码折叠
  - 通过单击行号与代码之间的折叠图标，可以折叠或展开代码块。
  - 支持 region
  - 折叠 `⌥⌘[` - 折叠光标所在位置最内层未折叠的代码区域。
  - 展开 `⌥⌘]` - 展开光标所在位置已折叠的代码区域。
- 缩进
  - 支持 tab 或空格
  - 支持配置缩进大小
- 文件编码
  - 若遇到乱码问题，可自行选择任意支持的编码后重新打开 vscode。

#### 主题

- 颜色主题
  - 打开主题选择器：命令面板输入命令 `Preferences: Color Theme`
  - ![图 5](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-20-24.png)
  - ![图 6](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-21-29.png)
  - 可以使用方向键上下移动，选择不同的颜色主题进行预览。在确定使用的主题之后，按下 Enter 键即可完成选择。
- 图标主题
  - `Preferences: File Icon Theme`
  - ![图 7](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-23-46.png)
  - 相关插件：`Material Icon Theme`、`vscode-icons`
  - ![图 8](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-26-08.png)
  - 可以在插件面板中搜索关键字，比如 `icon theme`，然后根据安装量来排序，排在最前面的两个目前 `25.07` 是 `Material Icon Theme`、`vscode-icons` 这两个。

#### 快捷键

- 快捷键的组成：
  - key：描述具体的按键。
  - command：定义要执行的命令。
  - when：这是可选的部分，定义在什么条件下此快捷键规则是生效的。
- 打开快捷键面板：
  - 命令：`Preferences: Open Keyboard Shortcuts`
  - 快捷键：`Ctrl+K Ctrl+S`
  - 你可以在此面板更便捷地管理快捷方式
    - 搜索和编辑所有快捷键
    - 右键查看冲突的快捷键
    - 删除快捷键
    - 修改快捷键的作用条件 `when`
    - 直接编辑快捷键配置的 JSON 文件 `keybindings.json`
    - ……
  - ![图 9](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-30-15.png)
- 查看快捷键大全：
  - 命令：`Help: Keyboard Shortcuts Reference`
  - 快捷键：`Ctrl+K Ctrl+R`
  - ![图 10](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-32-33.png)
  - 这会打开一个在线的 pdf 文件，里面有所有快捷键的大全。
  - https://code.visualstudio.com/shortcuts/keyboard-shortcuts-macos.pdf
- 键盘映射插件
  - 如果你是从 Vim、Sublime、IntelliJ、Atom、Eclipse、Visual Studio 或其他编辑器/IDE 转投到 Visual Studio Code 的，也许你依旧习惯使用原来开发工具的键盘快捷键。Visual Studio Code 对于主流的开发工具提供了各种键盘映射的插件，让你可以在 Visual Studio Code 中继续使用原来的开发工具的快捷键，而不用重新学习 Visual Studio Code 的快捷键。
  - ![图 11](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-21-37-18.png)

#### 集成终端

- 打开终端：`Ctrl + ~`
- 创建新的终端：`Ctrl + Shift + ~`
- 可选择不同的 shell
- 可配置 shell 中字体的样式
- 可在一个面板中拆分终端
- 可配置终端打开的默认位置
- 可以将终端抽离为一个独立的窗口
- 可配置终端 Tab 的颜色、名称、位置等信息
- 快速运行选中的文本：`Terminal：Run Selected Text in Active Terminal`

#### 中文显示

- 安装一个 vscode 官方插件：Chinese (Simplified) (简体中文) Language Pack for Visual Studio Code
- ![图 12](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-22-10-00.png)
- 配置显示的语言：`Change Language Mode`
- ![图 13](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-22-12-02.png)
- 有很多语言包可供选择
- ![图 14](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-17-22-13-13.png)
- 切换语言之后，会提示重启 vscode。

### 3.6. 🎯 第 6 章 进阶应用

这一张也是重点，相当于是在第 5 章基础用法之上，进一步介绍有关 VSCode 的更高级一些的用法。

可以说是专门为开发人员准备的内容。

#### 命令行

- 命令行帮助
  - `code --help` vscode 帮助命令，会打印 VS Code 的版本信息及各个命令的详细介绍。

::: details 查看 `code --help` 命令的输出

<<< ./assets/1.txt {bash}

:::

- 通过命令启动 VS Code
  - `code .` 使用 VS Code 打开当前文件夹
  - `code <file>` 使用 VS Code 打开指定文件
  - 如果是 Visual Studio Code Insiders，可以通过 `code-insiders .` 来启动

示例：

```bash
code index.html style.css documentation/readme.md
```

在一个空文件夹下执行下面的命令，会创建 `index.html`、`style.css`、`readme.md` 这 3 个文件，以及 `documentation` 文件夹，其中 `readme.md` 文件位于 `documentation` 文件夹下。

#### IntelliSense

- https://code.visualstudio.com/docs/editing/intellisense
- IntelliSense 是各类代码编辑功能的统称，包括：代码补全、参数信息、快速信息以及成员列表。这些功能有时也被称为"代码补全"、"内容辅助"或"代码提示"。
- Visual Studio Code 的 IntelliSense 功能由语言服务（Language Server）驱动。
- 当你在输入代码时，如果语言服务能推算出潜在的代码补全，那么就会显示 IntelliSense 的代码补全提示。按下 Tab 键或 Enter 键就可以插入所选择的补全选项。
- Visual Studio Code 为 JavaScript、TypeScript、JSON、HTML、CSS、SCSS 和 Less 提供了开箱即用的 IntelliSense 功能。VS Code 支持所有编程语言的基于单词的自动补全，但也可以通过安装语言扩展来配置更丰富的 IntelliSense 功能。以下是 Visual Studio Marketplace 中最受欢迎的语言扩展。
- ![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-19-13-23-39.png)

#### Code Navigation 代码导航

- 输入 Ctrl+P（快速打开）后输入文件名即可打开任意文件。
- Quick file navigation 快速文件导航
  - 资源管理器非常适合在浏览项目时进行文件导航。但在处理具体任务时，您会发现自己需要频繁地在同一组文件之间跳转。VS Code 提供了两个强大的命令，配合易用的键盘快捷键，可实现文件内及跨文件的高效导航。
  - 按住 Ctrl 键并按下 Tab 键，可查看当前编辑器组中所有已打开文件的列表。要打开其中某个文件，可继续按 Tab 键选择目标文件，然后松开 Ctrl 键即可打开。
  - 您也可以使用 Alt+左箭头和 Alt+右箭头在文件与编辑位置之间导航。如果在同一文件的不同行之间跳转，这些快捷键能让您轻松地在这些位置间切换。
- Breadcrumbs 面包屑导航
  - 编辑器内容区域上方设有名为"面包屑导航"的导航栏。它能显示当前位置，并支持在文件夹、文件和符号之间快速跳转。
  - 面包屑导航始终显示文件路径，并通过语言扩展功能展示光标所在位置的符号路径。所显示的符号与大纲视图和"转到符号"功能中的完全一致。
  - 点击路径中的任意面包屑节点，会显示该层级所有同属项的下拉列表，方便您快速跳转至其他文件夹和文件。
  - `breadcrumbs.*`
    - `breadcrumbs.enabled` 配置面包屑导航是否启用。
    - `breadcrumbs.filePath` 配置面包屑导航的前半段 - 文件路径信息。
    - `breadcrumbs.symbolPath` 配置面包屑导航的前半段 - 符号路径信息。
    - ……
  - `Ctrl+Shift+.` 与面包屑交互，这将选中面包屑导航中的最后一个元素并打开下拉菜单，以便实现快速导航到其他符号。
  - `Ctrl+Shift+;` 与面包屑交互，这将选中面包屑导航中的最后一个元素但不会打开下拉菜单，这时候你可以使用左右方向键导航，移动到其他位置后，再按方向键下展开导航菜单。
- Go to Definition 转到定义
  - 如果语言支持此功能，您可以按 F12 跳转到符号的定义处。
  - 如果按住 Ctrl 键并将鼠标悬停在符号上，将显示该声明的预览。
  - 可通过 Ctrl+单击跳转到定义，或使用 Ctrl+Alt+单击在侧边打开定义。
- Go to Type Definition 转到类型定义
  - 某些语言还支持通过编辑器上下文菜单或命令面板运行"转到类型定义"命令来跳转到符号的类型定义处。这将带您前往符号类型的定义位置。
- Go to Implementation 转到实现
  - 语言还可以支持通过按 Ctrl+F12 跳转到符号的实现处。
  - 对于接口，这将显示该接口的所有实现者；对于抽象方法，则会显示该方法的所有具体实现。
- Go to Symbol 转到符号
  - 可以使用 `Ctrl+Shift+O` 在文件中导航符号。
  - 或者 `Ctrl+P` 输入 `@` 在当前文件中快速导航符号。
- Open symbol by name 按名称打开符号
  - 某些语言支持使用 `Ctrl+T` 跨文件跳转到符号。
  - 输入要导航到的类型的首字母（无论包含该符号的文件是哪个），然后按 Enter 键。
- Peek 窥视
  - `Shift + F12`、`Alt + F12`
  - 窥视功能可以很好地帮你解决这样一个问题 —— 当你只想快速查看某处上下文时，却要被迫进行大幅度的上下文切换操作时。
  - 你可以在嵌入式预览编辑器中浏览不同引用位置，并直接进行快速编辑。点击预览编辑器的文件名或在结果列表中双击，将在外部编辑器中打开该引用。
- 查找所有引用信息
  - 通过 `Shift+Alt+F12` 快捷键或编辑区域右键菜单中的 `Find All References`，你可以查看一个符号的所有引用。
  - VS Code 提供了一个独立的引用面板来展示这些信息。
  - ![图 16](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-20-02-36-17.png)
- Bracket matching 括号匹配
  - 当光标靠近其中一个括号时，匹配的括号会立即高亮显示。
  - 使用 `Ctrl+Shift+\` 可以跳转到匹配的括号。
- Bracket Pair Colorization 括号对色彩标记
  - 通过将 `editor.bracketPairColorization.enabled` 设置为 true ，还可以为匹配的括号对启用色彩标记功能。
  - 所有颜色均可自定义主题，最多可配置六种颜色，可以使用 `workbench.colorCustomizations` 在设置中覆盖这些由主题提供的颜色

```json
"workbench.colorCustomizations": {
    "editorBracketHighlight.foreground1": "#FFD700",
    "editorBracketHighlight.foreground2": "#DA70D6",
    "editorBracketHighlight.foreground3": "#179fff",
},
```

- Reference information 引用信息
  - 某些语言（如 C#）支持实时更新的内联参考信息。这使您能够快速分析编辑产生的影响，或了解项目中特定方法或属性的使用频率：
  - ![图 1](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-19-15-25-53.png)
  - 直接点击这些标注即可调用"Peek References 查看引用"操作。
  - 这些引用信息是否显示，可以通过配置 `editor.codeLens` 来控制。
- Rename symbol 重命名符号
  - 部分语言支持跨文件重命名符号。按下 `F2` 键后输入新名称并按 Enter 键，该符号在所有文件中的使用实例都将被重命名。
- Errors & warnings 错误与警告
  - 生成
    - 警告或错误可能由配置的任务、丰富的语言服务或持续在后台分析代码的代码检查工具生成。
  - 显示
    - 状态栏会汇总显示所有错误和警告的数量统计。
    - 可以点击该统计信息或按下 `⇧⌘M` 快捷键，打开"问题"面板查看当前所有错误列表。
    - 当打开包含错误或警告的文件时，它们会以内联方式显示在文字中。
    - 要循环浏览当前文件中的错误或警告，可以按下 `⌥F8` 或 `⇧⌥F8`，这将显示一个内联区域，详细说明问题及可能的代码操作（如果可用）。
- Code Action 代码操作
  - 警告和错误可能会提供代码操作（也称为快速修复）来帮助解决问题。这些操作会以灯泡图标形式显示在编辑器左侧边栏。点击灯泡图标将显示代码操作选项或直接执行操作。
- Inlay Hints 内联提示
  - 某些语言会提供内联提示：即以内联方式呈现的源代码附加信息。这通常用于显示推断类型。
  - 可以通过 `editor.inlayHints.enabled` 设置启用/禁用内联提示功能，默认处于启用状态。
- Outgoing link protection 外链安全保护
  - 为保障您的安全，VS Code 在打开编辑器中的外部网站链接前会显示提示。
  - 命令面板：`Manage Trusted Domains`，配置信任的域。
  - ![图 15](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-20-02-08-30.png)

#### 玩转 Git

- https://code.visualstudio.com/docs/sourcecontrol/intro-to-git
  - Introduction to Git in VS Code
- https://code.visualstudio.com/docs/sourcecontrol/overview
  - Using Git source control in VS Code

#### 打造自己的主题

- 在 VS Code 中，可配置颜色的地方有很多，若有打造自定义主体的需求，建议直接查阅官方文档来配。
- https://code.visualstudio.com/api/references/theme-color
  - Theme Color | Visual Studio Code Extension API
- https://code.visualstudio.com/docs/configure/themes
  - Themes - Visual Studio Code
- settings.json
  - `workbench.colorCustomizations: { ... }` 配置工作台的主题颜色
  - `editor.tokenColorCustomizations: { ... }` 配置编辑器的主题颜色
  - ……

#### 快速创建可复用的代码片段

- https://code.visualstudio.com/docs/editing/userdefinedsnippets
  - Snippets in Visual Studio Code
- 可以通过插件来自动注入一些 snippets，也可以自定义 snippets，还可以为 snippets 添加快捷键。
- 自定义配置 snippets 示例：为 vitepress 中的 `code-group` 语法添加一个 snippet
  - 命令面板输入 `Snippets: Configure Snippets` 打开 snippets 配置
  - 找到 markdown 配置文件
  - 根据官方要求编写配置

::: code-group

````json [Code/User/snippets/markdown.json]
{
  // Place your snippets for markdown here. Each snippet is defined under a snippet name and has a prefix, body and
  // description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
  // $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the
  // same ids are connected.
  // Example:
  // "Print to console": {
  //  "prefix": "log",
  //  "body": [
  //    "console.log('$1');",
  //   "$2"
  //  ],
  //  "description": "Log output to console"
  // }
  "code-group": {
    "prefix": ["::: code-group"],
    "body": [
      "::: code-group",
      "",
      "${1:```txt [1]}",
      "",
      "```",
      "",
      "${2:```txt [2]}",
      "",
      "```",
      "",
      ":::"
    ],
    "description": "vitepress code-group"
  }
}
````

:::

- ![图 17](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-20-03-09-07.png)

#### Task，把重复的工作自动化

- https://code.visualstudio.com/docs/debugtest/tasks
- `.vscode/tasks.json`
- VS Code 当前可自动检测以下系统的任务：Gulp、Grunt、Jake 和 npm。
- 打印 `hello word` 示例

::: code-group

```json [.vscode/tasks.json]
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "打印 hello world",
      "type": "shell",
      "command": "echo hello world"
    }
  ]
}
```

:::

#### Multi-root Workspaces

- https://code.visualstudio.com/docs/editing/workspaces/workspaces
  - 介绍工作区 workspace 是什么
- https://code.visualstudio.com/docs/editing/workspaces/multi-root-workspaces
  - 介绍 multi-root workspaces 是什么
- VS Code 中的工作区能实现：
  - 配置仅适用于特定文件夹（而非其他文件夹）的设置。
  - 持久化仅在该工作区上下文中有效的任务和调试器启动配置。
  - 存储并恢复与该工作区相关的用户界面状态（例如已打开的文件）。
  - 仅针对该工作区选择性启用或禁用扩展。
- single-folder workspaces
  - 使用 VS Code 打开的文件夹，就是一个单一的工作区。
- multi-root workspaces
  - 多根工作区是 VS Code 的一项高级功能，它允许你将多个不同的文件夹配置为同一工作区的组成部分。
- 🤔 相比单一文件夹，多根工作区有何优势？
  - 最显著的优势在于，多根工作区允许您处理多个可能未存储在磁盘同一父目录下的项目。您可以从任意位置选择文件夹添加到工作区。
  - 对于这一点，也可以将磁盘上的文件夹合并到一个位置，然后使用 single-folder workspace 的形式来打开。
- 🤔 multi-root workspace 在实际开发中使用多吗？
  - 知道有这概念，不过几乎没用过。
  - 看了看官方文档，里面提到：
    - 即使您主要处理基于单文件夹的项目，使用 .code-workspace 文件仍能带来益处。您可以在文件夹内存储多个 .code-workspace 文件，根据场景需求提供项目的特定范围文件夹视图（例如 client.code-workspace、server.code-workspace 可从文件资源管理器中过滤无关文件夹）。由于 .code-workspace 文件支持 folders 部分的相对路径，这些工作区文件适用于所有用户，不受文件夹存储位置的影响。
    - 👆 这大概意思是可以将一个项目中的同一类型的任务丢到一个 workspace 中去单独管理，这样在处理指定问题的时候，只需要打开这个 workspace，然后重点关注这一个 workspace 中的模块即可，而且这个 workspace 中的设置啥的，可以独立配置。

#### 调试与运行

### 3.7. 🎯 第 7 章 插件

#### 插件市场

#### 插件管理

#### 那些不错的插件

### 3.8. 🎯 第 8 章 语言深入

#### 概览

#### Python

#### JavaScript

#### TypeScript

#### Java

#### C\#

#### C/C++

#### Go

#### 更多语言支持

### 3.9. 🎯 第 9 章 前端开发

#### HTML

#### CSS、SCSS 和 Less

#### Emmet

#### React

#### Angular

#### Vue

#### 前端插件推荐

### 3.10. 🎯 第 10 章 云计算开发

#### 微软 Azure

#### AWS

#### Google Cloud Platform

#### 阿里云

#### 腾讯云

### 3.11. 🎯 第 11 章 物联网开发

#### 设备端开发

#### 设备上云

#### 设备模拟

#### 边缘计算

#### 物联网插件推荐

### 3.12. 🎯 第 12 章 远程开发

#### 远程开发概览

#### 远程开发插件

#### SSH

#### 容器

#### WSL

### 3.13. 🎯 第 13 章 Visual Studio family

#### Visual Studio、Visual Studio Code、Visual Studio Codespaces，你都分清楚了吗

#### Visual Studio Codespaces

#### Visual Studio Live Share

#### Visual Studio IntelliCode

### 3.14. 🎯 第 14 章 成为 Visual Studio Code 的贡献者

#### GitHub Issues

#### 提问

#### 讨论

#### GitHub Pull requests

#### 插件

#### 翻译

### 3.15. 🎯 第 15 章 插件开发

#### 如何打造一款优秀的 Visual Studio Code 插件

#### 你的第一个 Visual Studio Code 插件

#### Visual Studio Code 插件的扩展能力

#### 插件开发面面观

#### 插件开发的生命周期
