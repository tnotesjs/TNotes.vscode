# [0006. VS Code 官网](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0006.%20VS%20Code%20%E5%AE%98%E7%BD%91)

<!-- region:toc -->

- [1. 🎯 本节内容](#1--本节内容)
- [2. 🫧 评价](#2--评价)
- [3. 🤔 官方文档基本结构是？](#3--官方文档基本结构是)
- [4. 🤔 Docs 中都介绍了哪些内容？](#4--docs-中都介绍了哪些内容)
- [5. 🤔 VSCode 有中文网吗？](#5--vscode-有中文网吗)
- [6. 🔗 引用](#6--引用)

<!-- endregion:toc -->

## 1. 🎯 本节内容

- VSCode 官网简介
- 官方文档核心模块使用指南

## 2. 🫧 评价

- VS Code 的官方文档写的特别很好，功能讲解的很详细，很多地方都配有 gif 动图来说明。
- 讲解各模块的时候会同时介绍相关的配置项。
- 在使用 VS Code 时若遇到问题，建议先阅读 VS Code 的官方文档，可以获得一手资料。
- 可以先快速把 `Docs` 中的所有内容给快速过一遍，对官方提供的说明文档中都有哪些内容有个初步的印象，以便后续遇到问题时能快速定位到对应的文档。

## 3. 🤔 官方文档基本结构是？

![img](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-11-07-10-39-48.png)

| 序号 | 名称 | 功能描述 |
| --- | --- | --- |
| 1 | LOGO | VS Code 官方 Logo 及标题，点击返回首页，是网站核心导航入口和视觉识别符号 |
| 2 | Docs | 官方文档中心入口，提供全链路技术文档（含多语言支持），覆盖安装/配置/调试/扩展开发全流程 |
| 3 | Updates | 版本更新日志，展示最新功能/性能优化/问题修复（如"Version 1.105"），附完整发行说明链接 |
| 4 | Blog | 技术博客专栏，发布产品动态、开发者故事和深度技术解析（如 AI 功能迭代、性能优化方案） |
| 5 | API | 扩展开发接口文档，提供 Extension API 规范、代码示例及调试指南，用于构建自定义扩展 |
| 6 | Extensions | 官方扩展市场入口，聚合 5 万+插件（含 Prettier/ESLint 等），支持 Verified Publisher 认证标识 |
| 7 | MCP (Copilot) | GitHub Copilot 集成专区，提供 AI 编程助手使用指南、订阅方案及最新能力（如 Cloud Agent） |
| 8 | FAQ | 常见问题解答库，汇总安装/配置/排障等高频问题的解决方案，新手快速解决问题的首选路径 |
| 9 | 主题切换按钮 | 支持浅色/深色/高对比度主题实时切换，提升不同环境下的阅读体验 |
| 10 | 文档搜索框 | 全局文档检索（快捷键 Ctrl+Shift+P），支持模糊匹配和结果高亮，高效定位技术信息 |
| 11 | Download 按钮 | 蓝色醒目下载入口，自动识别操作系统类型（Win/macOS/Linux），提供纯净安装包及校验值 |

其中最重要的模块当属 Docs 模块，在 Docs 中，会介绍 VS Code 的核心功能，以及如何使用这些功能。

## 4. 🤔 Docs 中都介绍了哪些内容？

Docs 大纲：

![img](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-11-07-10-48-19.png)

Docs 各章节简介：

| 章节 | 简介 |
| --- | --- |
| Overview | VS Code 核心功能速览 |
| Setup | 跨平台安装指南：Windows/macOS/Linux 详细安装步骤、系统要求及离线安装方案。 |
| Get Started | 5 分钟快速上手：界面导览、文件操作、基础编辑命令及第一个"Hello World"项目实战。（结尾 `Introductory Videos` 中还提供了视频讲解） |
| Configure | 深度定制指南：`settings.json` 高级配置、快捷键映射、代码片段（Snippets）和工作区策略设置。 |
| Edit code | 智能编码核心：IntelliSense 代码补全、多光标编辑、重构工具及 Emmet/Zen 模式高效技巧。 |
| Build, Debug, Test | 全链路开发支持：任务编译（tasks.json）、断点调试（launch.json）、集成测试框架（如 Jest）配置。 |
| GitHub Copilot | AI 编程实战：代码生成/注释解释/单元测试创建，私有代码上下文理解及安全合规使用策略。 |
| Source Control | Git 深度集成：可视化分支管理、暂存区操作、冲突解决及 GitHub Pull Request 直接协作。 |
| Terminal | 内置终端强化：多终端分屏、命令行工具集成（如 PowerShell/Zsh）、自定义终端环境变量。 |
| Languages | 语言生态总览：主流语言支持矩阵（语法高亮/调试/智能感知），扩展安装推荐及配置模板。 |
| Node.js/JavaScript | 专项优化指南：npm 脚本调试、ESLint 集成、浏览器预览及 Node.js 性能分析工具链。 |
| TypeScript | 类型驱动开发：自动类型推断、编译配置（tsconfig.json）、重构支持及类型定义文件管理。 |
| Python | 科学计算环境：虚拟环境配置、Jupyter Notebook 交互式运行、变量查看器及 Pylance 智能感知。 |
| Java | 企业级开发：Maven/Gradle 项目支持、Spring Boot 调试、JUnit 测试及代码质量分析。 |
| C++ | 低延迟开发：CMake 集成、GDB/LLDB 调试、跨平台编译配置及 IntelliSense 优化。 |
| C# | .NET 生态：Unity 游戏开发支持、NuGet 包管理、Razor 页面调试及 Azure Functions 部署。 |
| Container Tools | 云原生开发：Dockerfile 智能提示、容器镜像构建/推送、Kubernetes 配置验证及日志监控。 |
| Data Science | 数据科学工作流：交互式变量探查器、matplotlib/seaborn 可视化、远程 Jupyter 服务器连接。 |
| Intelligent Apps | AI 应用开发：Azure AI 模型集成、Copilot 扩展开发指南及向量数据库连接方案。 |
| Azure | 云服务直连：Azure Functions 调试、App Service 部署、数据库连接及云资源管理器。 |
| Remote | 远程开发三剑客：SSH 连接 Linux 服务器、WSL 2 深度集成、容器内开发环境搭建。 |
| Dev Containers | 环境标准化：通过 `devcontainer.json` 定义容器化开发环境，团队共享一致配置。 |
| Reference | 权威索引库：所有设置项说明、完整快捷键列表（含平台差异）、命令行参数及 JSON 配置 Schema。 |

## 5. 🤔 VSCode 有中文网吗？

有，但并不是微软官方推出的。

访问链接：https://vscode.js.cn/

中文网脚注：

![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-11-07-10-28-09.png)

在阅读时需要注意：部分专业术语在中文版中可能翻译不准确，建议对照英文版理解。

使用建议：

- 首选：英文官网 + 翻译插件（比如“沉浸式翻译”）或浏览器自动翻译（比如 Chrome 右键“翻译成中文”）
- 次选：VS Code 中文网（内容经过校对，质量较高）

## 6. 🔗 引用

- [VS Code 官网][1]
- [VS Code 中文网][2]
- [VS Code 官方文档][3]
- [VS Code GitHub 仓库][4]
- [VS Code 博客][5]

[1]: https://code.visualstudio.com/
[2]: https://vscode.js.cn/
[3]: https://code.visualstudio.com/docs
[4]: https://github.com/microsoft/vscode
[5]: https://code.visualstudio.com/blogs
