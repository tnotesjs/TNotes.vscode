# [0042. Stable、Insiders、Exploration、Web 对比与选择](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0042.%20Stable%E3%80%81Insiders%E3%80%81Exploration%E3%80%81Web%20%E5%AF%B9%E6%AF%94%E4%B8%8E%E9%80%89%E6%8B%A9)

<!-- region:toc -->

- [1. 🎯 本节内容](#1--本节内容)
- [2. 🫧 评价](#2--评价)
- [3. 🤔 VS Code 有哪些主要版本？](#3--vs-code-有哪些主要版本)
- [4. 🤔 Stable 版本是什么？](#4--stable-版本是什么)
- [5. 🤔 Insiders 版本是什么？](#5--insiders-版本是什么)
- [6. 🤔 Exploration 版本是什么？](#6--exploration-版本是什么)
- [7. 🤔 Web 版本是什么？](#7--web-版本是什么)
- [8. 🤔 各版本之间有什么区别？](#8--各版本之间有什么区别)
- [9. 🤔 如何选择适合自己的版本？](#9--如何选择适合自己的版本)
- [10. 🤔 如何下载和安装不同版本的 VS Code？](#10--如何下载和安装不同版本的-vs-code)
- [11. 🔗 引用](#11--引用)

<!-- endregion:toc -->

## 1. 🎯 本节内容

- VS Code 各版本对比
- 如何选择适合自己的 VS Code 版本

## 2. 🫧 评价

- 了解 VS Code 不同版本的定位和特点，能帮助开发者选择最适合自己的开发环境，避免因版本选择不当而影响开发效率。
- 对于大多数开发者，`Stable` 版本是最佳选择；需要体验最新功能的开发者可尝试 `Insiders`；而临时调试或轻量级编辑场景下，`VS Code Web` 版本非常实用。

## 3. 🤔 VS Code 有哪些主要版本？

VS Code 主要有以下四个官方版本：

- `Stable`：稳定版，正式发布版本
- `Insiders`：每日构建的预览版，包含最新功能
- `Exploration`：实验性版本，用于测试特定功能
- `Web`：基于浏览器的在线版本（`vscode.dev` 和 `github.dev`）

## 4. 🤔 Stable 版本是什么？

- `Stable` 是 VS Code 的正式稳定版本，经过充分测试，适合生产环境使用。
- 每月更新一次，版本号格式为 `x.y.z`（如 `1.89.1`）。
- 官方推荐大多数用户使用此版本，稳定性高，插件兼容性好。
- 下载地址：https://code.visualstudio.com/

## 5. 🤔 Insiders 版本是什么？

- `Insiders` 是 VS Code 的每日构建预览版，包含即将在下个 `Stable` 版本中发布的新功能。
- 几乎每天更新，版本号格式为 `x.y.z-insider`。
- 适合希望提前体验新功能、愿意承担轻微不稳定性风险的开发者。
- 可与 `Stable` 版本共存，不会影响稳定版使用。
- 下载地址：https://code.visualstudio.com/insiders

## 6. 🤔 Exploration 版本是什么？

- `Exploration` 是实验性版本，用于测试特定功能或平台支持（如 ARM64 架构）。
- 更新频率较低，主要面向特定需求的开发者或测试人员。
- 与 `Insiders` 类似，但更专注于特定实验性功能。
- 适合需要测试特定平台支持或功能的高级用户。
- 下载地址：https://github.com/microsoft/vscode-exploration/releases

## 7. 🤔 Web 版本是什么？

- `VS Code Web` 是基于浏览器的轻量级版本，包括 `vscode.dev` 和 `github.dev`。
- 无需安装，直接在浏览器中使用，适合快速编辑、查看代码或临时调试。
- 功能较桌面版有所简化，但支持基本编辑、语法高亮和部分扩展。
- 与 GitHub 深度集成，在 GitHub 仓库页面按 . 键即可打开 `github.dev`。
- 访问地址：https://vscode.dev

## 8. 🤔 各版本之间有什么区别？

| 特性       | Stable     | Insiders | Exploration | Web        |
| ---------- | ---------- | -------- | ----------- | ---------- |
| 稳定性     | ⭐⭐⭐⭐⭐ | ⭐⭐⭐   | ⭐⭐        | ⭐⭐⭐     |
| 更新频率   | 每月       | 每日     | 不定期      | 实时       |
| 功能完整性 | 完整       | 最新功能 | 实验性功能  | 基础功能   |
| 适用场景   | 生产环境   | 功能尝鲜 | 特定测试    | 快速编辑   |
| 安装方式   | 下载安装   | 下载安装 | 下载安装    | 浏览器访问 |
| 插件支持   | 完整       | 大部分   | 有限        | 部分       |

## 9. 🤔 如何选择适合自己的版本？

- 普通开发者：选择 `Stable` 版本，稳定性最佳，适合日常开发工作。
- 技术爱好者/早期采用者：安装 `Insiders` 版本，体验最新功能，可与 `Stable` 共存。
- 特定平台测试：需要测试 ARM64 等特定平台时，考虑 `Exploration` 版本。
- 临时编辑/快速查看：使用 `VS Code Web` 版本（`vscode.dev` 或 `github.dev`）。
- 企业环境：建议统一使用 `Stable` 版本，并制定明确的升级策略。

## 10. 🤔 如何下载和安装不同版本的 VS Code？

1. Stable 版本：

   - 访问 https://code.visualstudio.com/
   - 选择对应操作系统的安装包下载
   - 按照安装向导完成安装

2. Insiders 版本：

   - 访问 https://code.visualstudio.com/insiders
   - 下载安装包（与 Stable 版本安装程序不同）
   - 安装后可与 Stable 版本同时存在

3. Exploration 版本：

   - 访问 https://github.com/microsoft/vscode-exploration/releases
   - 下载对应平台的探索版安装包
   - 安装后可独立运行

4. Web 版本：
   - 直接访问 https://vscode.dev
   - 或在 GitHub 仓库页面按 . 键打开 `github.dev`
   - 无需安装，浏览器中即可使用

## 11. 🔗 引用

- [VS Code Stable 下载][1]
- [VS Code Insiders 下载][2]
- [VS Code Exploration 版本][3]
- [VS Code Web 版本][4]
- [VS Code 官方文档 - 版本说明][5]

[1]: https://code.visualstudio.com/
[2]: https://code.visualstudio.com/insiders
[3]: https://github.com/microsoft/vscode-exploration/releases
[4]: https://vscode.dev
[5]: https://code.visualstudio.com/docs/supporting/faq#_which-version-of-vs-code-is-right-for-me
