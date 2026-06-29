# [0011. 通过 URLs 打开 VS Code](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0011.%20%E9%80%9A%E8%BF%87%20URLs%20%E6%89%93%E5%BC%80%20VS%20Code)

<!-- region:toc -->

- [1. 概述](#1-概述)
- [2. 通过 URL 链接打开 VS Code](#2-通过-url-链接打开-vs-code)
- [3. `vscode://` 协议](#3-vscode-协议)
- [4. 通过浏览器快速打开 VS Code](#4-通过浏览器快速打开-vs-code)
- [5. 引用](#5-引用)

<!-- endregion:toc -->

## 1. 概述

- 记录了通过 URLs 打开 VS Code 的方法

## 2. 通过 URL 链接打开 VS Code

```bash
# 打开项目
vscode://file/{full path to project}/
vscode://file/c:/myProject/

# 打开文件
vscode://file/{full path to file}
vscode://file/c:/myProject/package.json

# 打开设置编辑器
vscode://settings/setting.name
vscode://settings/editor.wordWrap
```

## 3. `vscode://` 协议

- `vscode://`
  - `vscode://` 是 VS Code 的内置自定义协议（Custom URI Scheme）。
- 协议注册机制
  - **操作系统级注册**：安装 VS Code 时，会在操作系统中注册 `vscode://` 协议处理程序
  - **注册表位置**：
    - Windows：`HKEY_CLASSES_ROOT\vscode`
    - macOS：`~/Library/Preferences/com.microsoft.VSCode.plist`
    - Linux：`~/.config/mimeapps.list`
- VS Code 的核心组件 - Electron 就有内置的 API [`app.setAsDefaultProtocolClient()`](https://www.electronjs.org/docs/latest/api/app#appsetasdefaultprotocolclientprotocol-path-args) 来实现自定义协议。

```javascript
const { app } = require('electron')

app.setAsDefaultProtocolClient('vscode', process.execPath, ['--open-url', '--'])
```

- 常见使用场景
  - 可以通过 JS 控制浏览器打开一个新窗口，然后将 URL 设置为 `vscode://xxx` 即可快速使用 VS Code 打开指定文件。

```bash
# 打开文件夹
vscode://file//Users/name/project

# 打开文件
vscode://file//etc/hosts
```

## 4. 通过浏览器快速打开 VS Code

- 做法很简单，下面是基本流程：
- 比如你可以随便在 C 盘建一个 test 文件夹，路径为 `C:/test`
- 然后复制路径拼接到 `vscode://file/` 后边儿，比如 `vscode://file/C:/test`，将这个拼接好的路径丢到浏览器地址栏中
- 按下回车后会弹出一个确认提示框
  - ![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-19-10-20-57.png)
- 如果你本地有 test 文件夹，那么就会自动使用 VS Code 打开
- 如果你本地没有建 test 文件夹，那么会提示路径不存在
  - ![图 1](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-19-10-22-32.png)

---

- 你也可以在页面上构建一个超链接来实现此功能，只需要将 a 元素的 href 替换为上述链接即可。这样就实现了点击页面上的某个元素，即可快速使用 VS Code 打开对应文件。
- TNotes 中就采用这样的方式来快速定位对应的笔记文件所在位置。

<a href="vscode://file/C:/test" title="open in vscode" target="_blank">打开 C 盘下的 test 文件夹</a>

```html
<a href="vscode://file/C:/test" title="open in vscode" target="_blank"
  >打开 C 盘下的 test 文件夹</a
>
```

## 5. 引用

- https://code.visualstudio.com/docs/configure/command-line
  - 查看 VS Code 官方文档对 opening-vs-code-with-urls 的描述
- https://www.electronjs.org/docs/latest/api/app
  - 查看 Electron 官方文档中 app.openURLInBrowser() 方法的描述
