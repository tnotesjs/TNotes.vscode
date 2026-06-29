# [0037. TNotes 的 VS Code 配置项](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0037.%20TNotes%20%E7%9A%84%20VS%20Code%20%E9%85%8D%E7%BD%AE%E9%A1%B9)

<!-- region:toc -->

- [1. .vscode/settings.json](#1-vscodesettingsjson)
- [2. ⚙️ Workbench（工作台相关配置）](#2-️-workbench工作台相关配置)
- [3. ⚙️ Editor（编辑器相关配置）](#3-️-editor编辑器相关配置)
- [4. ⚙️ Extensions（扩展相关配置）](#4-️-extensions扩展相关配置)
- [5. ⚙️ Terminal（终端相关配置）](#5-️-terminal终端相关配置)
- [6. ⚙️ Files（文件相关配置）](#6-️-files文件相关配置)
- [7. ⚙️ Search（搜索相关配置）](#7-️-search搜索相关配置)
- [8. ⚙️ Explorer（资源管理器相关配置）](#8-️-explorer资源管理器相关配置)
- [9. ⚙️ Others（其他内置配置）](#9-️-others其他内置配置)
- [10. ⚙️ VSCode 第三方插件配置](#10-️-vscode-第三方插件配置)

<!-- endregion:toc -->

## 1. .vscode/settings.json

::: code-group

```json [通用全局配置]
{
  // -------------------------------------
  // #region - VSCode 内置配置
  // -------------------------------------

  // #region - Workbench（工作台相关配置）

  "workbench.list.smoothScrolling": false,
  "workbench.tree.indent": 10,
  "workbench.editor.highlightModifiedTabs": true,
  "workbench.editor.closeOnFileDelete": true,
  "workbench.editor.limit.enabled": true,
  "workbench.editor.limit.perEditorGroup": true,
  "workbench.editor.limit.value": 5,
  "workbench.iconTheme": "material-icon-theme",
  "workbench.startupEditor": "none",
  "workbench.colorTheme": "GitHub Dark Dimmed",
  "workbench.editor.empty.hint": "hidden",

  // #endregion - Workbench（工作台相关配置）

  // #region - Editor（编辑器相关配置）

  "editor.tabSize": 2,
  "editor.fontFamily": "'Fira Code','Consolas'",
  "editor.detectIndentation": false,
  "editor.cursorBlinking": "expand",
  "editor.largeFileOptimizations": false,
  "editor.accessibilitySupport": "off",
  "editor.cursorSmoothCaretAnimation": "on",
  "editor.guides.bracketPairs": "active",
  "editor.inlineSuggest.enabled": true,
  "editor.suggestSelection": "recentlyUsedByPrefix",
  "editor.acceptSuggestionOnEnter": "smart",
  "editor.suggest.snippetsPreventQuickSuggestions": false,
  "editor.stickyScroll.enabled": true,
  "editor.hover.sticky": true,
  "editor.suggest.insertMode": "replace",
  "editor.bracketPairColorization.enabled": true,
  "editor.autoClosingBrackets": "beforeWhitespace",
  "editor.autoClosingDelete": "always",
  "editor.autoClosingOvertype": "always",
  "editor.autoClosingQuotes": "beforeWhitespace",
  "editor.wordSeparators": "`~!@#%^&*()=+[{]}\\|;:'\",.<>/?",
  "editor.codeActionsOnSave": {
    "source.fixAll.eslint": "explicit",
    "source.fixAll.stylelint": "explicit",
    "source.organizeImports": "never"
  },
  "editor.defaultFormatter": "esbenp.prettier-vscode",
  "editor.formatOnSave": true,
  "editor.formatOnType": true,
  "[html]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "prettier.htmlWhitespaceSensitivity": "ignore"
  },
  "[css]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[scss]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[javascript]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[typescript]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[json]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[markdown]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "prettier.proseWrap": "never"
  },
  "[jsonc]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[vue]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },

  // #endregion - Editor（编辑器相关配置）

  // #region - Extensions（扩展相关配置）

  "extensions.ignoreRecommendations": true,

  // #endregion - Extensions（扩展相关配置）

  // #region - Terminal（终端相关配置）

  "terminal.integrated.cursorBlinking": true,
  // "editor.mouseWheelZoom": true,
  "terminal.integrated.persistentSessionReviveProcess": "never",
  "terminal.integrated.tabs.enabled": true,
  "terminal.integrated.scrollback": 10000,
  "terminal.integrated.stickyScroll.enabled": true,
  "terminal.integrated.smoothScrolling": true,
  "terminal.integrated.fontSize": 14,
  // "terminal.integrated.cursorStyle": "underline",

  // #endregion - Terminal（终端相关配置）

  // #region - Files（文件相关配置）

  "files.eol": "\n",
  "files.insertFinalNewline": true,
  "files.simpleDialog.enable": true,
  "files.associations": {
    "*.ejs": "html",
    "*.art": "html",
    "**/tsconfig.json": "jsonc",
    "*.json": "jsonc",
    "package.json": "json",
    "*.md": "markdown"
  },

  "files.exclude": {
    "**/.eslintcache": true,
    "**/bower_components": true,
    "**/.turbo": true,
    "**/.idea": true,
    "**/tmp": true,
    "**/.git": true,
    "**/.svn": true,
    "**/.hg": true,
    "**/CVS": true,
    "**/.stylelintcache": true,
    "**/.DS_Store": true,
    "**/vite.config.mts.*": true,
    "**/tea.yaml": true
  },
  "files.watcherExclude": {
    "**/.git/objects/**": true,
    "**/.git/subtree-cache/**": true,
    "**/.vscode/**": true,
    "**/node_modules/**": true,
    "**/tmp/**": true,
    "**/bower_components/**": true,
    "**/dist/**": true,
    "**/yarn.lock": true
  },

  // #endregion - Files（文件相关配置）

  // #region - Search（搜索相关配置）

  "search.searchEditor.singleClickBehaviour": "peekDefinition",
  "search.followSymlinks": false,

  // 在使用搜索功能时，将这些文件夹/文件排除在外
  "search.exclude": {
    "**/node_modules": true,
    "**/.git": true,
    "**/.gitignore": true,
    "**/.DS_Store": true,
    "**/.vitepress/cache": true,
    "out": true,
    "dist": true,
    "node_modules": true
  },

  // #endregion - Search（搜索相关配置）

  // #region - Explorer（资源管理器相关配置）

  "explorer.confirmDelete": true,
  "explorer.confirmDragAndDrop": true,

  // 控制相关文件嵌套展示
  "explorer.fileNesting.enabled": true,
  "explorer.fileNesting.expand": false,
  "explorer.fileNesting.patterns": {
    "*.ts": "$(capture).test.ts, $(capture).test.tsx, $(capture).spec.ts, $(capture).spec.tsx, $(capture).d.ts",
    "*.tsx": "$(capture).test.ts, $(capture).test.tsx, $(capture).spec.ts, $(capture).spec.tsx,$(capture).d.ts",
    "*.env": "$(capture).env.*",
    "README.md": "README*,CHANGELOG*,LICENSE,CNAME",
    "package.json": ".gitignore,package-lock.json",
    "eslint.config.mjs": ".eslintignore,.prettierignore,.stylelintignore,.commitlintrc.*,.prettierrc.*,stylelint.config.*,.lintstagedrc.mjs,cspell.json",
    "tailwind.config.mjs": "postcss.*",
    ".tnotes.json": "index.md,MERGED_README.md,Settings.md,sidebar.json,TOC.md"
  },

  // #endregion - Explorer（资源管理器相关配置）

  // #region - Others（其他相关配置）

  "debug.onTaskErrors": "debugAnyway",
  "diffEditor.ignoreTrimWhitespace": false,
  "npm.packageManager": "npm",

  "css.validate": false,
  "less.validate": false,
  "scss.validate": false,

  // #endregion - Others（其他相关配置）

  // -------------------------------------
  // #endregion - VSCode 内置配置
  // -------------------------------------

  // -------------------------------------
  // #region - VSCode 插件配置
  // -------------------------------------

  // emmet
  "emmet.showSuggestionsAsSnippets": true,
  "emmet.triggerExpansionOnTab": false,

  // errorLens
  // doc 👉 https://github.com/usernamehw/vscode-error-lens/blob/master/docs/docs.md
  "errorLens.enabledDiagnosticLevels": ["error"],
  "errorLens.excludeBySource": ["cSpell", "Grammarly", "eslint"],

  // stylelint
  "stylelint.enable": true,
  "stylelint.packageManager": "npm",
  "stylelint.validate": ["css", "less", "postcss", "scss", "vue"],
  "stylelint.customSyntax": "postcss-html",
  "stylelint.snippet": ["css", "less", "postcss", "scss", "vue"],

  // typescript
  "typescript.inlayHints.enumMemberValues.enabled": true,
  "typescript.preferences.preferTypeOnlyAutoImports": true,
  "typescript.preferences.includePackageJsonAutoImports": "on",
  "typescript.tsdk": "node_modules/typescript/lib",

  // eslint
  "eslint.validate": [
    "javascript",
    "typescript",
    "javascriptreact",
    "typescriptreact",
    "vue",
    "html",
    "markdown",
    "json",
    "jsonc",
    "json5"
  ],

  // "github.copilot.enable": {
  //   "*": true,
  //   "markdown": true,
  //   "plaintext": false,
  //   "yaml": false
  // },
  "vue.server.hybridMode": true,

  // better-comments
  "better-comments.tags": [
    {
      "tag": "!",
      "color": "#FF2D00",
      "strikethrough": false,
      "underline": false,
      "backgroundColor": "transparent",
      "bold": false,
      "italic": false
    },
    {
      "tag": "?",
      "color": "#3498DB",
      "strikethrough": false,
      "underline": false,
      "backgroundColor": "transparent",
      "bold": false,
      "italic": false
    },
    {
      "tag": "//",
      "color": "#474747",
      "strikethrough": false,
      "underline": false,
      "backgroundColor": "transparent",
      "bold": false,
      "italic": false
    },
    {
      "tag": "todo",
      "color": "#FF8C00",
      "strikethrough": false,
      "underline": false,
      "backgroundColor": "transparent",
      "bold": false,
      "italic": false
    },
    {
      "tag": "*",
      "color": "#98C379",
      "strikethrough": false,
      "underline": false,
      "backgroundColor": "transparent",
      "bold": false,
      "italic": false
    }
  ]

  // -------------------------------------
  // #endregion - VSCode 插件配置
  // -------------------------------------
}
```

:::

## 2. ⚙️ Workbench（工作台相关配置）

::: code-group

```json [settings.json]
{
  "workbench.list.smoothScrolling": false,
  "workbench.tree.indent": 10,
  "workbench.editor.highlightModifiedTabs": true,
  "workbench.editor.closeOnFileDelete": true,
  "workbench.editor.limit.enabled": true,
  "workbench.editor.limit.perEditorGroup": true,
  "workbench.editor.limit.value": 5
}
```

:::

- 🤔 workbench 工作台是哪一块区域？
  - ![](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-03-29-08-10-34.png)
- `workbench.list.smoothScrolling`
  - 控制列表和树是否具有平滑滚动效果。
- `workbench.tree.indent`
  - 控制树缩进(以像素为单位)。
- `workbench.editor.highlightModifiedTabs`
  - 控制是否在具有未保存更改的编辑器的选项卡上绘制顶部边框。
  - 如果未将 `workbench.editor.showTabs` 设置为 multiple，则会忽略此值。
- `workbench.editor.closeOnFileDelete`
  - 控制在会话期间显示已打开文件的编辑器是否应在被其他进程删除或重命名时自动关闭。
  - 禁用此功能将使编辑器在此类事件中保持打开状态。
  - 请注意，从应用程序内删除将始终关闭编辑器，且永远不会关闭具有未保存更改的编辑器以保留数据。
- `workbench.editor.limit.enabled`
  - 控制打开的编辑器数是否应受限制。
  - 启用后，最近使用较少的编辑器将关闭，以为新打开的编辑器腾出空间。
- `workbench.editor.limit.perEditorGroup`
  - 控制最大打开的编辑器的限制是否应应用于每个编辑器组或所有编辑器组。
- `workbench.editor.limit.value`
  - 控制打开编辑器的最大数量。
  - 使用 `workbench.editor.limit.perEditorGroup` 设置控制每个编辑器组或跨所有组的限制。

## 3. ⚙️ Editor（编辑器相关配置）

::: code-group

```json [settings.json]
{
  "editor.tabSize": 2,
  "editor.detectIndentation": false,
  "editor.cursorBlinking": "expand",
  "editor.largeFileOptimizations": false,
  "editor.accessibilitySupport": "off",
  "editor.cursorSmoothCaretAnimation": "on",
  "editor.guides.bracketPairs": true,
  "editor.inlineSuggest.enabled": true,
  "editor.suggestSelection": "recentlyUsedByPrefix",
  "editor.acceptSuggestionOnEnter": "smart",
  "editor.suggest.snippetsPreventQuickSuggestions": false,
  "editor.stickyScroll.enabled": true,
  "editor.hover.sticky": true,
  "editor.suggest.insertMode": "replace",
  "editor.bracketPairColorization.enabled": true,
  "editor.autoClosingBrackets": "beforeWhitespace",
  "editor.autoClosingDelete": "always",
  "editor.autoClosingOvertype": "always",
  "editor.autoClosingQuotes": "beforeWhitespace",
  "editor.wordSeparators": "`~!@#%^&*()=+[{]}\\|;:'\",.<>/?",
  "editor.codeActionsOnSave": {
    "source.fixAll.eslint": "explicit",
    "source.fixAll.stylelint": "explicit",
    "source.organizeImports": "never"
  },
  "editor.defaultFormatter": "esbenp.prettier-vscode",
  "editor.formatOnSave": true,
  "[html]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "prettier.htmlWhitespaceSensitivity": "ignore"
  },
  "[css]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[scss]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[javascript]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[typescript]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[json]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[markdown]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "prettier.proseWrap": "never"
  },
  "[jsonc]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "[vue]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  }
}
```

:::

## 4. ⚙️ Extensions（扩展相关配置）

::: code-group

```json [settings.json]
{
  "extensions.ignoreRecommendations": true
}
```

:::

## 5. ⚙️ Terminal（终端相关配置）

::: code-group

```json [settings.json]
{
  "terminal.integrated.cursorBlinking": true,
  "terminal.integrated.persistentSessionReviveProcess": "never",
  "terminal.integrated.tabs.enabled": true,
  "terminal.integrated.scrollback": 10000,
  "terminal.integrated.stickyScroll.enabled": true
}
```

:::

## 6. ⚙️ Files（文件相关配置）

::: code-group

```json [settings.json]
{
  "files.eol": "\n",
  "files.insertFinalNewline": true,
  "files.simpleDialog.enable": true,
  "files.associations": {
    "*.ejs": "html",
    "*.art": "html",
    "**/tsconfig.json": "jsonc",
    "*.json": "jsonc",
    "package.json": "json",
    "*.md": "markdown"
  },

  "files.exclude": {
    "**/.eslintcache": true,
    "**/bower_components": true,
    "**/.turbo": true,
    "**/.idea": true,
    "**/tmp": true,
    "**/.git": true,
    "**/.svn": true,
    "**/.hg": true,
    "**/CVS": true,
    "**/.stylelintcache": true,
    "**/.DS_Store": true,
    "**/vite.config.mts.*": true,
    "**/tea.yaml": true
  },
  "files.watcherExclude": {
    "**/.git/objects/**": true,
    "**/.git/subtree-cache/**": true,
    "**/.vscode/**": true,
    "**/node_modules/**": true,
    "**/tmp/**": true,
    "**/bower_components/**": true,
    "**/dist/**": true,
    "**/yarn.lock": true
  }
}
```

:::

## 7. ⚙️ Search（搜索相关配置）

::: code-group

```json [settings.json]
{
  "search.searchEditor.singleClickBehaviour": "peekDefinition",
  "search.followSymlinks": false,

  // 在使用搜索功能时，将这些文件夹/文件排除在外
  "search.exclude": {
    "**/node_modules": true,
    "**/.git": true,
    "**/.gitignore": true,
    "**/.DS_Store": true,
    "**/.vitepress/cache": true,
    "out": true,
    "dist": true,
    "node_modules": true
  }
}
```

:::

## 8. ⚙️ Explorer（资源管理器相关配置）

::: code-group

```json [settings.json]
{
  "explorer.confirmDelete": true,

  // 控制相关文件嵌套展示
  "explorer.fileNesting.enabled": true,
  "explorer.fileNesting.expand": false,
  "explorer.fileNesting.patterns": {
    "*.ts": "$(capture).test.ts, $(capture).test.tsx, $(capture).spec.ts, $(capture).spec.tsx, $(capture).d.ts",
    "*.tsx": "$(capture).test.ts, $(capture).test.tsx, $(capture).spec.ts, $(capture).spec.tsx,$(capture).d.ts",
    "*.env": "$(capture).env.*",
    "README.md": "README*,CHANGELOG*,LICENSE,CNAME",
    "package.json": ".gitignore,package-lock.json",
    "eslint.config.mjs": ".eslintignore,.prettierignore,.stylelintignore,.commitlintrc.*,.prettierrc.*,stylelint.config.*,.lintstagedrc.mjs,cspell.json",
    "tailwind.config.mjs": "postcss.*",
    ".tnotes.json": "index.md,MERGED_README.md,Settings.md,sidebar.json,TOC.md"
  }
}
```

:::

- ![](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2025-03-30-22-49-06.png)

## 9. ⚙️ Others（其他内置配置）

::: code-group

```json [settings.json]
{
  "debug.onTaskErrors": "debugAnyway",
  "diffEditor.ignoreTrimWhitespace": false,
  "npm.packageManager": "npm",

  "css.validate": false,
  "less.validate": false,
  "scss.validate": false
}
```

:::

## 10. ⚙️ VSCode 第三方插件配置

::: code-group

```json [settings.json]
{
  // emmet
  "emmet.showSuggestionsAsSnippets": true,
  "emmet.triggerExpansionOnTab": false,

  // errorLens
  // doc 👉 https://github.com/usernamehw/vscode-error-lens/blob/master/docs/docs.md
  "errorLens.enabledDiagnosticLevels": ["error"],
  "errorLens.excludeBySource": ["cSpell", "Grammarly", "eslint"],

  // stylelint
  "stylelint.enable": true,
  "stylelint.packageManager": "npm",
  "stylelint.validate": ["css", "less", "postcss", "scss", "vue"],
  "stylelint.customSyntax": "postcss-html",
  "stylelint.snippet": ["css", "less", "postcss", "scss", "vue"],

  // typescript
  "typescript.inlayHints.enumMemberValues.enabled": true,
  "typescript.preferences.preferTypeOnlyAutoImports": true,
  "typescript.preferences.includePackageJsonAutoImports": "on",
  "typescript.tsdk": "node_modules/typescript/lib",

  // eslint
  "eslint.validate": [
    "javascript",
    "typescript",
    "javascriptreact",
    "typescriptreact",
    "vue",
    "html",
    "markdown",
    "json",
    "jsonc",
    "json5"
  ],

  // "github.copilot.enable": {
  //   "*": true,
  //   "markdown": true,
  //   "plaintext": false,
  //   "yaml": false
  // },
  "vue.server.hybridMode": true
}
```

:::
