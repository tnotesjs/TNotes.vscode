# [0010. code 命令](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0010.%20code%20%E5%91%BD%E4%BB%A4)

<!-- region:toc -->

- [1. 概述](#1-概述)
- [2. `code --help`](#2-code---help)
- [3. code 命令选项](#3-code-命令选项)
  - [3.1. 选项大全](#31-选项大全)
  - [3.2. 常用的一些选项](#32-常用的一些选项)
  - [3.3. 插件相关选项](#33-插件相关选项)
- [4. 通过命令启动 VS Code 打开指定文件夹](#4-通过命令启动-vs-code-打开指定文件夹)

<!-- endregion:toc -->

## 1. 概述

- 掌握 code 命令的基本使用。

## 2. `code --help`

- `code --help` vscode 帮助命令，会打印 VS Code 的版本信息及各个命令的详细介绍。

```bash
code --help
# Visual Studio Code 1.102.1

# Usage: code [options] [paths...]

# To read from stdin, append '-' (e.g. 'ps aux | grep code | code -')

# Options
#   -d --diff <file> <file>                    Compare two files with each
#                                              other.
#   -m --merge <path1> <path2> <base> <result> Perform a three-way merge by
#                                              providing paths for two
#                                              modified versions of a file,
#                                              the common origin of both
#                                              modified versions and the
#                                              output file to save merge
#                                              results.
#   -a --add <folder>                          Add folder(s) to the last
#                                              active window.
#   --remove <folder>                          Remove folder(s) from the last
#                                              active window.
#   -g --goto <file:line[:character]>          Open a file at the path on the
#                                              specified line and character
#                                              position.
#   -n --new-window                            Force to open a new window.
#   -r --reuse-window                          Force to open a file or folder
#                                              in an already opened window.
#   -w --wait                                  Wait for the files to be
#                                              closed before returning.
#   --locale <locale>                          The locale to use (e.g. en-US
#                                              or zh-TW).
#   --user-data-dir <dir>                      Specifies the directory that
#                                              user data is kept in. Can be
#                                              used to open multiple distinct
#                                              instances of Code.
#   --profile <profileName>                    Opens the provided folder or
#                                              workspace with the given
#                                              profile and associates the
#                                              profile with the workspace. If
#                                              the profile does not exist, a
#                                              new empty one is created.
#   -h --help                                  Print usage.

# Extensions Management
#   --extensions-dir <dir>              Set the root path for extensions.
#   --list-extensions                   List the installed extensions.
#   --show-versions                     Show versions of installed
#                                       extensions, when using
#                                       --list-extensions.
#   --category <category>               Filters installed extensions by
#                                       provided category, when using
#                                       --list-extensions.
#   --install-extension <ext-id | path> Installs or updates an extension. The
#                                       argument is either an extension id or
#                                       a path to a VSIX. The identifier of
#                                       an extension is
#                                       '${publisher}.${name}'. Use '--force'
#                                       argument to update to latest version.
#                                       To install a specific version provide
#                                       '@${version}'. For example:
#                                       'vscode.csharp@1.2.3'.
#   --pre-release                       Installs the pre-release version of
#                                       the extension, when using
#                                       --install-extension
#   --uninstall-extension <ext-id>      Uninstalls an extension.
#   --update-extensions                 Update the installed extensions.
#   --enable-proposed-api <ext-id>      Enables proposed API features for
#                                       extensions. Can receive one or more
#                                       extension IDs to enable
#                                       individually.

# Model Context Protocol
#   --add-mcp <json> Adds a Model Context Protocol server definition to the
#                    user profile. Accepts JSON input in the form
#                    '{"name":"server-name","command":...}'

# Troubleshooting
#   -v --version
#       Print version.
#   --verbose
#       Print verbose output (implies --wait).
#   --log <level>
#       Log level to use. Default is 'info'. Allowed values are 'critical', 'error', 'warn', 'info', 'debug', 'trace', 'off'. You can also configure the log level of an extension by passing extension id and log level in the following format: '${publisher}.${name}:${logLevel}'. For example: 'vscode.csharp:trace'. Can receive one or more such entries.
#   -s --status
#       Print process usage and diagnostics information.
#   --prof-startup
#       Run CPU profiler during startup.
#   --disable-extensions
#       Disable all installed extensions. This option is not persisted and is effective only when the command opens a new window.
#   --disable-extension <ext-id>
#       Disable the provided extension. This option is not persisted and is effective only when the command opens a new window.
#   --sync <on | off>
#       Turn sync on or off.
#   --inspect-extensions <port>
#       Allow debugging and profiling of extensions. Check the developer tools for the connection URI.
#   --inspect-brk-extensions <port>
#       Allow debugging and profiling of extensions with the extension host being paused after start. Check the developer tools for the connection URI.
#   --disable-lcd-text
#       Disable LCD font rendering.
#   --disable-gpu
#       Disable GPU hardware acceleration.
#   --disable-chromium-sandbox
#       Use this option only when there is requirement to launch the application as sudo user on Linux or when running as an elevated user in an applocker environment on Windows.
#   --locate-shell-integration-path <shell>
#       Print the path to a terminal shell integration script. Allowed values are 'bash', 'pwsh', 'zsh' or 'fish'.
#   --telemetry
#       Shows all telemetry events which VS code collects.
#   --startup-experiment-group <control|maximizedChat|splitEmptyEditorChat|splitWelcomeChat>
#       Override the startup experiment group.

# Subcommands
#   chat         Pass in a prompt to run in a chat session in the current
#                working directory.
#   serve-web    Run a server that displays the editor UI in browsers.
#   tunnel       Make the current machine accessible from vscode.dev or other
#                machines through a secure tunnel.
```

## 3. code 命令选项

### 3.1. 选项大全

| 命令选项 | 说明 |
| --- | --- |
| `-d, --diff <file1> <file2>` | 比较两个文件的差异 |
| `-m, --merge <path1> <path2> <base> <result>` | 执行三方合并，提供两个修改版本、基础版本和结果保存路径 |
| `-a, --add <folder>` | 将文件夹添加到最后一个活动窗口 |
| `--remove <folder>` | 从最后一个活动窗口中移除文件夹 |
| `-g, --goto <file:line[:character]>` | 在指定行和字符位置打开文件 |
| `-n, --new-window` | 强制打开新窗口 |
| `-r, --reuse-window` | 强制在已打开的窗口中打开文件/文件夹 |
| `-w, --wait` | 等待文件关闭后才返回 |
| `--locale <locale>` | 设置使用的区域（如 en-US 或 zh-TW） |
| `--user-data-dir <dir>` | 指定用户数据目录，用于打开多个独立 VS Code 实例 |
| `--profile <profileName>` | 使用指定配置文件打开工作区 |
| `-h, --help` | 打印帮助信息 |
| `--extensions-dir <dir>` | 设置扩展根目录 |
| `--list-extensions` | 列出已安装的扩展 |
| `--show-versions` | 显示已安装扩展的版本（配合 `--list-extensions`） |
| `--category <category>` | 按类别过滤扩展（配合 `--list-extensions`） |
| `--install-extension <ext-id｜path>` | 安装/更新扩展（扩展 ID 或 VSIX 路径） |
| `--pre-release` | 安装扩展的预发布版本（配合 `--install-extension`） |
| `--uninstall-extension <ext-id>` | 卸载扩展 |
| `--update-extensions` | 更新所有已安装扩展 |
| `--enable-proposed-api <ext-id>` | 为扩展启用提议的 API |
| `--add-mcp <json>` | 添加 MCP 服务器定义到用户配置 |
| `-v, --version` | 打印版本信息 |
| `--verbose` | 打印详细输出（隐含 `--wait`） |
| `--log <level>` | 设置日志级别（critical/error/warn/info/debug/trace/off） |
| `-s, --status` | 打印进程使用情况和诊断信息 |
| `--prof-startup` | 在启动时运行 CPU 分析器 |
| `--disable-extensions` | 禁用所有已安装扩展（仅对新窗口有效） |
| `--disable-extension <ext-id>` | 禁用指定扩展（仅对新窗口有效） |
| `--sync <on｜off>` | 开启/关闭设置同步 |
| `--inspect-extensions <port>` | 启用扩展调试（指定端口） |
| `--inspect-brk-extensions <port>` | 启用扩展调试并在启动时暂停 |
| `--disable-lcd-text` | 禁用 LCD 字体渲染 |
| `--disable-gpu` | 禁用 GPU 硬件加速 |
| `--disable-chromium-sandbox` | 禁用 Chromium 沙箱（需 sudo 权限） |
| `--locate-shell-integration-path <shell>` | 打印终端 shell 集成脚本路径（bash/pwsh/zsh/fish） |
| `--telemetry` | 显示 VS Code 收集的所有遥测事件 |
| `--startup-experiment-group <group>` | 覆盖启动实验分组 |

### 3.2. 常用的一些选项

| 参数 | 示例 | 说明 |
| --- | --- | --- |
| `-h` 或 `--help` | `code -h` | 输出帮助信息 |
| `-v` 或 `--version` | `code -v` | 输出版本信息 |
| `-n` 或 `--new-window` | `code -n` | 创建一个新窗口 |
| `-g` 或 `--goto` | `code -g package.json:5:8` | 跳转到指定文件 `package.json` 的第 5 行第 8 列 |
| `-d` 或 `--diff` | `code -d 1.txt 2.txt` | 比较两个文件 `1.txt` 和 `2.txt` 内容的差异 |
| `--verbose` | `code --verbose` | 打印详细输出。调试的时候或许会有用，能查看更详细的输出。 |

### 3.3. 插件相关选项

| 参数 | 示例 | 说明 |
| --- | --- | --- |
| `--list-extensions` | `code --list-extensions` | 列出所有已安装的插件 |
| `--install-extension` | `code --install-extension alibaba-cloud.tongyi-lingma` | 安装指定插件。 |
| `--uninstall-extension` | `code --uninstall-extension alibaba-cloud.tongyi-lingma` | 卸载指定插件。 |
| `--show-versions` | `code --list-extensions --show-versions` | 列出所有已安装的插件的同时，显示插件的版本信息。 |
| `--disable-extensions` | `code --disable-extensions` | 禁用所有插件 |
| `--extensions-dir` | `code --extensions-dir /tmp/myextdir` | 指定插件目录 |

- 插件 ID `<ext-id>`
  - 安装插件和卸载插件的时候，参数要求是完整的插件 ID，格式为：`publisher.extensionName`。
  - 比如 `alibaba-cloud.tongyi-lingma` 这个 ID 可以通过插件详情页获取，比如 https://marketplace.visualstudio.com/items?itemName=Alibaba-Cloud.tongyi-lingma 链接中的最后一部分 `Alibaba-Cloud.tongyi-lingma` 就是 VS Code 中插件的唯一标识。
  - ![图 0](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-07-19-10-50-29.png)
  - 也可以通过 `code --list-extensions` 命令获取插件 ID，这个命令打印的插件列表，其实就是安装的插件的 ID 列表。

## 4. 通过命令启动 VS Code 打开指定文件夹

- 通过命令启动 VS Code
  - `code .` 使用 VS Code 打开当前文件夹
  - `code <file>` 使用 VS Code 打开指定文件
- Visual Studio Code Insiders 可以通过 `code-insiders .` 来启动
