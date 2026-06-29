# [0028. region 注释](https://github.com/tnotesjs/TNotes.vscode/tree/main/notes/0028.%20region%20%E6%B3%A8%E9%87%8A)

<!-- region:toc -->

- [1. 概述](#1-概述)
- [2. region 注释的写法和作用](#2-region-注释的写法和作用)
- [3. demos.1 - region 注释示例](#3-demos1---region-注释示例)

<!-- endregion:toc -->

## 1. 概述

- 介绍了在 VSCode 中如何书写 region 注释，以及 region 注释的作用。

## 2. region 注释的写法和作用

- region 注释的格式非常简单，只需要在开始位置加上 region，结束位置加上 endregion 即可。
- region 注释的作用：
  - 如果一个模块中含有的代码量比较多（比如大于 100 行），可以考虑使用区域注释的方式，对代码进行分组，方便阅读。
  - 区域注释的内容可以被折叠，对于那些逻辑已经清晰的代码块或者不那么重要的代码块，都可以使用区域注释进行折叠，这样或许可以更好地集中精力关注核心的代码块。
- 下面以 js 为例：

```js
// #region 描述信息
// ...（这部分是代码）
// #endregion 描述信息
```

## 3. demos.1 - region 注释示例

::: code-group

```js {1,5,7,9,11,25,27,42,44,48}
//#region Imports
const express = require('express')
const app = express()
const PORT = 3000
//#endregion

//#region Configurations
app.use(express.json())
//#endregion

//#region Database Mock Functions
// ...
// This region simulates some database operations

/**
 * Simulate fetching data from a database.
 */
function fetchData() {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve([
        { id: 1, name: 'John Doe' },
        { id: 2, name: 'Jane Doe' },
      ])
    }, 1000)
  })
}
//#endregion

//#region API Endpoints
// ...
// Setup a simple API endpoint

/**
 * GET /users endpoint to fetch a list of users.
 */
app.get('/users', async (req, res) => {
  try {
    const data = await fetchData()
    res.json(data)
  } catch (error) {
    res.status(500).send('Error fetching data')
  }
})
//#endregion

//#region Server Startup
app.listen(PORT, () => {
  console.log(`Server running on http://localhost:${PORT}`)
})
//#endregion
```

:::

- 每一个 region 区域都可以折叠起来，这样，当一个模块中代码量比较大的时候，可以更好的集中精力关注核心的代码块。
- ![](https://cdn.jsdelivr.net/gh/tnotesjs/imgs@main/2024-10-09-22-46-18.png)
