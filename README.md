# vscode

<!-- region:toc -->

  - [1. 学习资源与参考](#1-学习资源与参考)
  - [2. 概览与历史](#2-概览与历史)
  - [3. 安装、版本与分发渠道](#3-安装版本与分发渠道)
  - [4. 核心界面与组件](#4-核心界面与组件)
  - [5. 工作区与项目管理](#5-工作区与项目管理)
  - [6. 文件与编辑操作与导航](#6-文件与编辑操作与导航)
  - [7. 快捷键与自定义](#7-快捷键与自定义)
  - [8. Tasks 与自动化](#8-tasks-与自动化)
  - [9. 命令行与协议](#9-命令行与协议)
  - [10. 调试 Debugging](#10-调试-debugging)
  - [11. Git 与源代码管理](#11-git-与源代码管理)
  - [12. 扩展生态与插件实践](#12-扩展生态与插件实践)
  - [13. 远程与开发环境](#13-远程与开发环境)
  - [14. 配置与个性化](#14-配置与个性化)
  - [15. 性能优化与故障排除](#15-性能优化与故障排除)
  - [16. 安全与隐私](#16-安全与隐私)
  - [17. 数据科学与 Notebook 支持](#17-数据科学与-notebook-支持)
  - [18. 生产力技巧与最佳实践](#18-生产力技巧与最佳实践)

<!-- endregion:toc -->

## 1. 学习资源与参考

- [x] [0016. 学习资源](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0016.%20%E5%AD%A6%E4%B9%A0%E8%B5%84%E6%BA%90/README.md)
- [x] [0001. 《Visual Studio Code 权威指南》](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0001.%20%E3%80%8AVisual%20Studio%20Code%20%E6%9D%83%E5%A8%81%E6%8C%87%E5%8D%97%E3%80%8B/README.md)
- [x] [0005. 《Visual Studio Code 权威指南》笔记](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0005.%20%E3%80%8AVisual%20Studio%20Code%20%E6%9D%83%E5%A8%81%E6%8C%87%E5%8D%97%E3%80%8B%E7%AC%94%E8%AE%B0/README.md)
- [x] [0009. VS Code 菜鸟教程](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0009.%20VS%20Code%20%E8%8F%9C%E9%B8%9F%E6%95%99%E7%A8%8B/README.md)
- [ ] [0013. 扩展市场与插件搜索技巧](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0013.%20%E6%89%A9%E5%B1%95%E5%B8%82%E5%9C%BA%E4%B8%8E%E6%8F%92%E4%BB%B6%E6%90%9C%E7%B4%A2%E6%8A%80%E5%B7%A7/README.md)
- [ ] [0040. 社区与生态（Marketplace、GitHub、Issue Tracker）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0040.%20%E7%A4%BE%E5%8C%BA%E4%B8%8E%E7%94%9F%E6%80%81%EF%BC%88Marketplace%E3%80%81GitHub%E3%80%81Issue%20Tracker%EF%BC%89/README.md)
- [x] [0039. VSCode 参考资料汇总](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0039.%20VSCode%20%E5%8F%82%E8%80%83%E8%B5%84%E6%96%99%E6%B1%87%E6%80%BB/README.md)

## 2. 概览与历史

- [x] [0038. VS Code 简介](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0038.%20VS%20Code%20%E7%AE%80%E4%BB%8B/README.md)
- [x] [0002. VS Code 简史](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0002.%20VS%20Code%20%E7%AE%80%E5%8F%B2/README.md)
- [x] [0004. 最受欢迎的 IDE](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0004.%20%E6%9C%80%E5%8F%97%E6%AC%A2%E8%BF%8E%E7%9A%84%20IDE/README.md)
- [ ] [0041. VS Code 架构简述（Electron + Extension Host）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0041.%20VS%20Code%20%E6%9E%B6%E6%9E%84%E7%AE%80%E8%BF%B0%EF%BC%88Electron%20%2B%20Extension%20Host%EF%BC%89/README.md)

## 3. 安装、版本与分发渠道

- [ ] [0006. VS Code 官网](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0006.%20VS%20Code%20%E5%AE%98%E7%BD%91/README.md)
- [x] [0008. VS Code Insiders](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0008.%20VS%20Code%20Insiders/README.md)
- [ ] [0042. Stable、Insiders、Exploration、Web 对比与选择](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0042.%20Stable%E3%80%81Insiders%E3%80%81Exploration%E3%80%81Web%20%E5%AF%B9%E6%AF%94%E4%B8%8E%E9%80%89%E6%8B%A9/README.md)
- [ ] [0043. 安装与更新策略（自动更新、手动、多版本共存）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0043.%20%E5%AE%89%E8%A3%85%E4%B8%8E%E6%9B%B4%E6%96%B0%E7%AD%96%E7%95%A5%EF%BC%88%E8%87%AA%E5%8A%A8%E6%9B%B4%E6%96%B0%E3%80%81%E6%89%8B%E5%8A%A8%E3%80%81%E5%A4%9A%E7%89%88%E6%9C%AC%E5%85%B1%E5%AD%98%EF%BC%89/README.md)

## 4. 核心界面与组件

- [x] [0003. VS Code 核心组件](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0003.%20VS%20Code%20%E6%A0%B8%E5%BF%83%E7%BB%84%E4%BB%B6/README.md)
- [ ] [0021. 侧边栏与活动栏自定义](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0021.%20%E4%BE%A7%E8%BE%B9%E6%A0%8F%E4%B8%8E%E6%B4%BB%E5%8A%A8%E6%A0%8F%E8%87%AA%E5%AE%9A%E4%B9%89/README.md)
- [ ] [0022. 状态栏配置与扩展](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0022.%20%E7%8A%B6%E6%80%81%E6%A0%8F%E9%85%8D%E7%BD%AE%E4%B8%8E%E6%89%A9%E5%B1%95/README.md)
- [ ] [0044. 界面布局自定义（视图拖拽、面板位置）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0044.%20%E7%95%8C%E9%9D%A2%E5%B8%83%E5%B1%80%E8%87%AA%E5%AE%9A%E4%B9%89%EF%BC%88%E8%A7%86%E5%9B%BE%E6%8B%96%E6%8B%BD%E3%80%81%E9%9D%A2%E6%9D%BF%E4%BD%8D%E7%BD%AE%EF%BC%89/README.md)
- [ ] [0045. 命令面板与快捷访问机制](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0045.%20%E5%91%BD%E4%BB%A4%E9%9D%A2%E6%9D%BF%E4%B8%8E%E5%BF%AB%E6%8D%B7%E8%AE%BF%E9%97%AE%E6%9C%BA%E5%88%B6/README.md)

## 5. 工作区与项目管理

- [ ] [0023. 工作区设置与配置文件](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0023.%20%E5%B7%A5%E4%BD%9C%E5%8C%BA%E8%AE%BE%E7%BD%AE%E4%B8%8E%E9%85%8D%E7%BD%AE%E6%96%87%E4%BB%B6/README.md)
- [ ] [0024. 项目模板与脚手架](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0024.%20%E9%A1%B9%E7%9B%AE%E6%A8%A1%E6%9D%BF%E4%B8%8E%E8%84%9A%E6%89%8B%E6%9E%B6/README.md)
- [ ] [0046. 单根与多根工作区（Multi-root Workspace）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0046.%20%E5%8D%95%E6%A0%B9%E4%B8%8E%E5%A4%9A%E6%A0%B9%E5%B7%A5%E4%BD%9C%E5%8C%BA%EF%BC%88Multi-root%20Workspace%EF%BC%89/README.md)
- [ ] [0047. 保存窗口状态与恢复](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0047.%20%E4%BF%9D%E5%AD%98%E7%AA%97%E5%8F%A3%E7%8A%B6%E6%80%81%E4%B8%8E%E6%81%A2%E5%A4%8D/README.md)

## 6. 文件与编辑操作与导航

- [x] [0012. Peek 窥视](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0012.%20Peek%20%E7%AA%A5%E8%A7%86/README.md)
- [ ] [0025. 文件对比与 Diff 视图](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0025.%20%E6%96%87%E4%BB%B6%E5%AF%B9%E6%AF%94%E4%B8%8E%20Diff%20%E8%A7%86%E5%9B%BE/README.md)
- [ ] [0026. 代码折叠与展开策略](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0026.%20%E4%BB%A3%E7%A0%81%E6%8A%98%E5%8F%A0%E4%B8%8E%E5%B1%95%E5%BC%80%E7%AD%96%E7%95%A5/README.md)
- [ ] [0027. 符号搜索与跳转](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0027.%20%E7%AC%A6%E5%8F%B7%E6%90%9C%E7%B4%A2%E4%B8%8E%E8%B7%B3%E8%BD%AC/README.md)
- [x] [0028. region 注释](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0028.%20region%20%E6%B3%A8%E9%87%8A/README.md)
- [x] [0029. 固定的标签换行展示](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0029.%20%E5%9B%BA%E5%AE%9A%E7%9A%84%E6%A0%87%E7%AD%BE%E6%8D%A2%E8%A1%8C%E5%B1%95%E7%A4%BA/README.md)
- [x] [0031. explorer.confirmDelete](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0031.%20explorer.confirmDelete/README.md)
- [ ] [0048. 面包屑与大纲导航](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0048.%20%E9%9D%A2%E5%8C%85%E5%B1%91%E4%B8%8E%E5%A4%A7%E7%BA%B2%E5%AF%BC%E8%88%AA/README.md)
- [ ] [0049. 多光标与选择技巧](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0049.%20%E5%A4%9A%E5%85%89%E6%A0%87%E4%B8%8E%E9%80%89%E6%8B%A9%E6%8A%80%E5%B7%A7/README.md)
- [ ] [0050. 快速打开与跳转技巧](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0050.%20%E5%BF%AB%E9%80%9F%E6%89%93%E5%BC%80%E4%B8%8E%E8%B7%B3%E8%BD%AC%E6%8A%80%E5%B7%A7/README.md)

## 7. 快捷键与自定义

- [x] [0007. VS Code 快捷键大全](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0007.%20VS%20Code%20%E5%BF%AB%E6%8D%B7%E9%94%AE%E5%A4%A7%E5%85%A8/README.md)
- [ ] [0051. keybindings.json 进阶与冲突排查](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0051.%20keybindings.json%20%E8%BF%9B%E9%98%B6%E4%B8%8E%E5%86%B2%E7%AA%81%E6%8E%92%E6%9F%A5/README.md)
- [ ] [0052. 为不同语言或工作区定义专属快捷键](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0052.%20%E4%B8%BA%E4%B8%8D%E5%90%8C%E8%AF%AD%E8%A8%80%E6%88%96%E5%B7%A5%E4%BD%9C%E5%8C%BA%E5%AE%9A%E4%B9%89%E4%B8%93%E5%B1%9E%E5%BF%AB%E6%8D%B7%E9%94%AE/README.md)
- [ ] [0053. 快捷键迁移指南（从其他编辑器）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0053.%20%E5%BF%AB%E6%8D%B7%E9%94%AE%E8%BF%81%E7%A7%BB%E6%8C%87%E5%8D%97%EF%BC%88%E4%BB%8E%E5%85%B6%E4%BB%96%E7%BC%96%E8%BE%91%E5%99%A8%EF%BC%89/README.md)

## 8. Tasks 与自动化

- [x] [0014. Tasks](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0014.%20Tasks/README.md)
- [x] [0015. Tasks Schema](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0015.%20Tasks%20Schema/README.md)
- [ ] [0034. Task 变量与替换](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0034.%20Task%20%E5%8F%98%E9%87%8F%E4%B8%8E%E6%9B%BF%E6%8D%A2/README.md)
- [ ] [0054. 任务链与调试或终端联动](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0054.%20%E4%BB%BB%E5%8A%A1%E9%93%BE%E4%B8%8E%E8%B0%83%E8%AF%95%E6%88%96%E7%BB%88%E7%AB%AF%E8%81%94%E5%8A%A8/README.md)
- [ ] [0055. 常见自动化场景示例（构建、代码生成）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0055.%20%E5%B8%B8%E8%A7%81%E8%87%AA%E5%8A%A8%E5%8C%96%E5%9C%BA%E6%99%AF%E7%A4%BA%E4%BE%8B%EF%BC%88%E6%9E%84%E5%BB%BA%E3%80%81%E4%BB%A3%E7%A0%81%E7%94%9F%E6%88%90%EF%BC%89/README.md)

## 9. 命令行与协议

- [x] [0010. code 命令](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0010.%20code%20%E5%91%BD%E4%BB%A4/README.md)
- [x] [0011. 通过 URLs 打开 VS Code](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0011.%20%E9%80%9A%E8%BF%87%20URLs%20%E6%89%93%E5%BC%80%20VS%20Code/README.md)
- [ ] [0056. vscode 协议高级用法（深链到文件与行）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0056.%20vscode%20%E5%8D%8F%E8%AE%AE%E9%AB%98%E7%BA%A7%E7%94%A8%E6%B3%95%EF%BC%88%E6%B7%B1%E9%93%BE%E5%88%B0%E6%96%87%E4%BB%B6%E4%B8%8E%E8%A1%8C%EF%BC%89/README.md)
- [ ] [0057. CLI 批处理与脚本集成案例](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0057.%20CLI%20%E6%89%B9%E5%A4%84%E7%90%86%E4%B8%8E%E8%84%9A%E6%9C%AC%E9%9B%86%E6%88%90%E6%A1%88%E4%BE%8B/README.md)

## 10. 调试 Debugging

- [ ] [0035. 远程调试配置](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0035.%20%E8%BF%9C%E7%A8%8B%E8%B0%83%E8%AF%95%E9%85%8D%E7%BD%AE/README.md)
- [ ] [0058. 调试基础（launch.json 结构）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0058.%20%E8%B0%83%E8%AF%95%E5%9F%BA%E7%A1%80%EF%BC%88launch.json%20%E7%BB%93%E6%9E%84%EF%BC%89/README.md)
- [ ] [0059. 断点类型与条件断点、日志点](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0059.%20%E6%96%AD%E7%82%B9%E7%B1%BB%E5%9E%8B%E4%B8%8E%E6%9D%A1%E4%BB%B6%E6%96%AD%E7%82%B9%E3%80%81%E6%97%A5%E5%BF%97%E7%82%B9/README.md)
- [ ] [0060. 多目标与复合调试（compound）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0060.%20%E5%A4%9A%E7%9B%AE%E6%A0%87%E4%B8%8E%E5%A4%8D%E5%90%88%E8%B0%83%E8%AF%95%EF%BC%88compound%EF%BC%89/README.md)
- [ ] [0061. 调试控制台与变量、调用栈分析](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0061.%20%E8%B0%83%E8%AF%95%E6%8E%A7%E5%88%B6%E5%8F%B0%E4%B8%8E%E5%8F%98%E9%87%8F%E3%80%81%E8%B0%83%E7%94%A8%E6%A0%88%E5%88%86%E6%9E%90/README.md)

## 11. Git 与源代码管理

- [ ] [0036. Git 冲突解决与合并工具](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0036.%20Git%20%E5%86%B2%E7%AA%81%E8%A7%A3%E5%86%B3%E4%B8%8E%E5%90%88%E5%B9%B6%E5%B7%A5%E5%85%B7/README.md)
- [ ] [0062. Git 面板基础工作流](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0062.%20Git%20%E9%9D%A2%E6%9D%BF%E5%9F%BA%E7%A1%80%E5%B7%A5%E4%BD%9C%E6%B5%81/README.md)
- [ ] [0063. 暂存区、分支、变基、标签实践](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0063.%20%E6%9A%82%E5%AD%98%E5%8C%BA%E3%80%81%E5%88%86%E6%94%AF%E3%80%81%E5%8F%98%E5%9F%BA%E3%80%81%E6%A0%87%E7%AD%BE%E5%AE%9E%E8%B7%B5/README.md)
- [ ] [0064. 与外部 Git 工具协同（CLI、GitLens）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0064.%20%E4%B8%8E%E5%A4%96%E9%83%A8%20Git%20%E5%B7%A5%E5%85%B7%E5%8D%8F%E5%90%8C%EF%BC%88CLI%E3%80%81GitLens%EF%BC%89/README.md)

## 12. 扩展生态与插件实践

- [x] [0032. lake-editor 插件](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0032.%20lake-editor%20%E6%8F%92%E4%BB%B6/README.md)
- [ ] [0065. 扩展评估与性能影响](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0065.%20%E6%89%A9%E5%B1%95%E8%AF%84%E4%BC%B0%E4%B8%8E%E6%80%A7%E8%83%BD%E5%BD%B1%E5%93%8D/README.md)
- [ ] [0066. 推荐扩展分类（编辑、测试、重构、远程）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0066.%20%E6%8E%A8%E8%8D%90%E6%89%A9%E5%B1%95%E5%88%86%E7%B1%BB%EF%BC%88%E7%BC%96%E8%BE%91%E3%80%81%E6%B5%8B%E8%AF%95%E3%80%81%E9%87%8D%E6%9E%84%E3%80%81%E8%BF%9C%E7%A8%8B%EF%BC%89/README.md)
- [ ] [0067. 自定义扩展安装源与离线安装](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0067.%20%E8%87%AA%E5%AE%9A%E4%B9%89%E6%89%A9%E5%B1%95%E5%AE%89%E8%A3%85%E6%BA%90%E4%B8%8E%E7%A6%BB%E7%BA%BF%E5%AE%89%E8%A3%85/README.md)
- [ ] [0075. 扩展开发入门](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0075.%20%E6%89%A9%E5%B1%95%E5%BC%80%E5%8F%91%E5%85%A5%E9%97%A8/README.md)
- [ ] [0088. 常用扩展推荐列表](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0088.%20%E5%B8%B8%E7%94%A8%E6%89%A9%E5%B1%95%E6%8E%A8%E8%8D%90%E5%88%97%E8%A1%A8/README.md)

## 13. 远程与开发环境

- [ ] [0068. Remote SSH、Containers、WSL 概览](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0068.%20Remote%20SSH%E3%80%81Containers%E3%80%81WSL%20%E6%A6%82%E8%A7%88/README.md)
- [ ] [0069. Dev Containers 与可复现环境](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0069.%20Dev%20Containers%20%E4%B8%8E%E5%8F%AF%E5%A4%8D%E7%8E%B0%E7%8E%AF%E5%A2%83/README.md)
- [ ] [0070. Web 版 VS Code（vscode.dev、github.dev）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0070.%20Web%20%E7%89%88%20VS%20Code%EF%BC%88vscode.dev%E3%80%81github.dev%EF%BC%89/README.md)

## 14. 配置与个性化

- [x] [0030. 修改编辑器的字体为 Fira Code](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0030.%20%E4%BF%AE%E6%94%B9%E7%BC%96%E8%BE%91%E5%99%A8%E7%9A%84%E5%AD%97%E4%BD%93%E4%B8%BA%20Fira%20Code/README.md)
- [ ] [0037. TNotes 的 VS Code 配置项](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0037.%20TNotes%20%E7%9A%84%20VS%20Code%20%E9%85%8D%E7%BD%AE%E9%A1%B9/README.md)
- [ ] [0017. VS Code 常用设置分类索引](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0017.%20VS%20Code%20%E5%B8%B8%E7%94%A8%E8%AE%BE%E7%BD%AE%E5%88%86%E7%B1%BB%E7%B4%A2%E5%BC%95/README.md)
- [ ] [0018. Settings Sync 与共享方案](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0018.%20Settings%20Sync%20%E4%B8%8E%E5%85%B1%E4%BA%AB%E6%96%B9%E6%A1%88/README.md)
- [ ] [0019. Workspace Trust 与安全模型](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0019.%20Workspace%20Trust%20%E4%B8%8E%E5%AE%89%E5%85%A8%E6%A8%A1%E5%9E%8B/README.md)
- [ ] [0071. Snippets 定义与共享](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0071.%20Snippets%20%E5%AE%9A%E4%B9%89%E4%B8%8E%E5%85%B1%E4%BA%AB/README.md)
- [ ] [0072. Emmet 使用速查](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0072.%20Emmet%20%E4%BD%BF%E7%94%A8%E9%80%9F%E6%9F%A5/README.md)
- [ ] [0073. 用户、工作区、语言、远程 设置层级](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0073.%20%E7%94%A8%E6%88%B7%E3%80%81%E5%B7%A5%E4%BD%9C%E5%8C%BA%E3%80%81%E8%AF%AD%E8%A8%80%E3%80%81%E8%BF%9C%E7%A8%8B%20%E8%AE%BE%E7%BD%AE%E5%B1%82%E7%BA%A7/README.md)
- [ ] [0074. Telemetry 配置与隐私选项](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0074.%20Telemetry%20%E9%85%8D%E7%BD%AE%E4%B8%8E%E9%9A%90%E7%A7%81%E9%80%89%E9%A1%B9/README.md)
- [ ] [0089. 主题与配色方案](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0089.%20%E4%B8%BB%E9%A2%98%E4%B8%8E%E9%85%8D%E8%89%B2%E6%96%B9%E6%A1%88/README.md)
- [ ] [0090. 图标主题配置](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0090.%20%E5%9B%BE%E6%A0%87%E4%B8%BB%E9%A2%98%E9%85%8D%E7%BD%AE/README.md)
- [ ] [0091. 自定义欢迎页](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0091.%20%E8%87%AA%E5%AE%9A%E4%B9%89%E6%AC%A2%E8%BF%8E%E9%A1%B5/README.md)

## 15. 性能优化与故障排除

- [ ] [0020. 性能与故障排查索引](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0020.%20%E6%80%A7%E8%83%BD%E4%B8%8E%E6%95%85%E9%9A%9C%E6%8E%92%E6%9F%A5%E7%B4%A2%E5%BC%95/README.md)
- [ ] [0076. 启动性能分析（Developer Startup Performance）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0076.%20%E5%90%AF%E5%8A%A8%E6%80%A7%E8%83%BD%E5%88%86%E6%9E%90%EF%BC%88Developer%20Startup%20Performance%EF%BC%89/README.md)
- [ ] [0077. 扩展性能与影响诊断](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0077.%20%E6%89%A9%E5%B1%95%E6%80%A7%E8%83%BD%E4%B8%8E%E5%BD%B1%E5%93%8D%E8%AF%8A%E6%96%AD/README.md)
- [ ] [0078. 日志与故障模式（Log、Output、Extensions Host）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0078.%20%E6%97%A5%E5%BF%97%E4%B8%8E%E6%95%85%E9%9A%9C%E6%A8%A1%E5%BC%8F%EF%BC%88Log%E3%80%81Output%E3%80%81Extensions%20Host%EF%BC%89/README.md)
- [ ] [0079. 常见卡顿与内存占用优化清单](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0079.%20%E5%B8%B8%E8%A7%81%E5%8D%A1%E9%A1%BF%E4%B8%8E%E5%86%85%E5%AD%98%E5%8D%A0%E7%94%A8%E4%BC%98%E5%8C%96%E6%B8%85%E5%8D%95/README.md)
- [ ] [0092. 文件监控与排除配置](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0092.%20%E6%96%87%E4%BB%B6%E7%9B%91%E6%8E%A7%E4%B8%8E%E6%8E%92%E9%99%A4%E9%85%8D%E7%BD%AE/README.md)
- [ ] [0093. 大文件处理优化](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0093.%20%E5%A4%A7%E6%96%87%E4%BB%B6%E5%A4%84%E7%90%86%E4%BC%98%E5%8C%96/README.md)
- [x] [0033. 解决“在 VS Code 中修改文件、目录时，VS Code 卡死的问题”](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0033.%20%E8%A7%A3%E5%86%B3%E2%80%9C%E5%9C%A8%20VS%20Code%20%E4%B8%AD%E4%BF%AE%E6%94%B9%E6%96%87%E4%BB%B6%E3%80%81%E7%9B%AE%E5%BD%95%E6%97%B6%EF%BC%8CVS%20Code%20%E5%8D%A1%E6%AD%BB%E7%9A%84%E9%97%AE%E9%A2%98%E2%80%9D/README.md)

## 16. 安全与隐私

- [ ] [0080. 扩展来源与权限风险管理](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0080.%20%E6%89%A9%E5%B1%95%E6%9D%A5%E6%BA%90%E4%B8%8E%E6%9D%83%E9%99%90%E9%A3%8E%E9%99%A9%E7%AE%A1%E7%90%86/README.md)
- [ ] [0081. 安全设置总览与最佳实践](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0081.%20%E5%AE%89%E5%85%A8%E8%AE%BE%E7%BD%AE%E6%80%BB%E8%A7%88%E4%B8%8E%E6%9C%80%E4%BD%B3%E5%AE%9E%E8%B7%B5/README.md)
- [ ] [0094. 代码签名与验证](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0094.%20%E4%BB%A3%E7%A0%81%E7%AD%BE%E5%90%8D%E4%B8%8E%E9%AA%8C%E8%AF%81/README.md)

## 17. 数据科学与 Notebook 支持

- [ ] [0082. Notebook 基础（单元、内核、变量）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0082.%20Notebook%20%E5%9F%BA%E7%A1%80%EF%BC%88%E5%8D%95%E5%85%83%E3%80%81%E5%86%85%E6%A0%B8%E3%80%81%E5%8F%98%E9%87%8F%EF%BC%89/README.md)
- [ ] [0083. Jupyter 调试与交互技巧](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0083.%20Jupyter%20%E8%B0%83%E8%AF%95%E4%B8%8E%E4%BA%A4%E4%BA%92%E6%8A%80%E5%B7%A7/README.md)
- [ ] [0084. 与 Python、数据科学扩展协作](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0084.%20%E4%B8%8E%20Python%E3%80%81%E6%95%B0%E6%8D%AE%E7%A7%91%E5%AD%A6%E6%89%A9%E5%B1%95%E5%8D%8F%E4%BD%9C/README.md)
- [ ] [0095. Notebook 扩展与插件](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0095.%20Notebook%20%E6%89%A9%E5%B1%95%E4%B8%8E%E6%8F%92%E4%BB%B6/README.md)

## 18. 生产力技巧与最佳实践

- [ ] [0085. 常用配置片段（settings.json 精选）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0085.%20%E5%B8%B8%E7%94%A8%E9%85%8D%E7%BD%AE%E7%89%87%E6%AE%B5%EF%BC%88settings.json%20%E7%B2%BE%E9%80%89%EF%BC%89/README.md)
- [ ] [0086. 个人工作流范式示例（阅读、编写、重构、调试链）](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0086.%20%E4%B8%AA%E4%BA%BA%E5%B7%A5%E4%BD%9C%E6%B5%81%E8%8C%83%E5%BC%8F%E7%A4%BA%E4%BE%8B%EF%BC%88%E9%98%85%E8%AF%BB%E3%80%81%E7%BC%96%E5%86%99%E3%80%81%E9%87%8D%E6%9E%84%E3%80%81%E8%B0%83%E8%AF%95%E9%93%BE%EF%BC%89/README.md)
- [ ] [0087. 排错-改进-自动化 循环最佳实践](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0087.%20%E6%8E%92%E9%94%99-%E6%94%B9%E8%BF%9B-%E8%87%AA%E5%8A%A8%E5%8C%96%20%E5%BE%AA%E7%8E%AF%E6%9C%80%E4%BD%B3%E5%AE%9E%E8%B7%B5/README.md)
- [ ] [0096. 快速重构技巧集](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0096.%20%E5%BF%AB%E9%80%9F%E9%87%8D%E6%9E%84%E6%8A%80%E5%B7%A7%E9%9B%86/README.md)
- [ ] [0097. 代码导航最佳实践](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0097.%20%E4%BB%A3%E7%A0%81%E5%AF%BC%E8%88%AA%E6%9C%80%E4%BD%B3%E5%AE%9E%E8%B7%B5/README.md)
- [ ] [0098. 团队协作配置指南](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0098.%20%E5%9B%A2%E9%98%9F%E5%8D%8F%E4%BD%9C%E9%85%8D%E7%BD%AE%E6%8C%87%E5%8D%97/README.md)
- [ ] [0099. 效率提升插件组合](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0099.%20%E6%95%88%E7%8E%87%E6%8F%90%E5%8D%87%E6%8F%92%E4%BB%B6%E7%BB%84%E5%90%88/README.md)
- [ ] [0100. 工作流自动化案例](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0100.%20%E5%B7%A5%E4%BD%9C%E6%B5%81%E8%87%AA%E5%8A%A8%E5%8C%96%E6%A1%88%E4%BE%8B/README.md)
