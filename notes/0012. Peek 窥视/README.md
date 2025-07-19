# [0012. Peek 窥视](https://github.com/Tdahuyou/TNotes.vscode/tree/main/notes/0012.%20Peek%20%E7%AA%A5%E8%A7%86)

<!-- region:toc -->

- [1. 📝 概述](#1--概述)
- [2. 📒 Peek 窥视](#2--peek-窥视)
- [3. 💻 demos.1 - 体验 Peek 的使用](#3--demos1---体验-peek-的使用)

<!-- endregion:toc -->

## 1. 📝 概述

- 了解 VS Code 中的 Peek 功能。

## 2. 📒 Peek 窥视

- 相关快捷方式：
  - 转到引用 `Shift + F12`
  - 速览定义 `Alt + F12`
- 窥视功能可以很好地帮你解决这样一个问题 —— 当你只想快速查看某处上下文时，却要被迫进行大幅度的上下文切换操作时。
- 你可以在嵌入式预览编辑器中浏览不同引用位置，并直接进行快速编辑。点击预览编辑器的文件名或在结果列表中双击，将在外部编辑器中打开该引用。

## 3. 💻 demos.1 - 体验 Peek 的使用

::: code-group

<<< ./demos/1/1.js [1.js]

<<< ./demos/1/2.js [2.js]

:::

- 将光标停在 2.js 中的 test 上，然后按下快捷键 `Alt + F12`，或者通过鼠标右键找到对应“速览定义”菜单项点击也行，或者直接唤起命令面板，输入 Peek Definition 也行。打开 Peek 面板之后，你可以根据需要调整 Peek 面板的尺寸，以及直接在面板中编辑指定的文件内容。假设模块 1、2 中都有大量的代码，你现在想要在模块 2 中修改模块 1 的默认导出的 test 的 key 和 val，通过 Peek 功能，你可以无需在两个模块之间来回切换，直接在模块 2 中打开一个 Peek 面板，直接修改即可，改完之后光标还停留在你当前的工作位置，以便你继续后续的编码，省去了来回切换上下文的额外工作。
- ![图 1](https://cdn.jsdelivr.net/gh/Tdahuyou/imgs@main/2025-07-19-15-15-12.png)
- ![图 0](https://cdn.jsdelivr.net/gh/Tdahuyou/imgs@main/2025-07-19-15-14-18.png)
