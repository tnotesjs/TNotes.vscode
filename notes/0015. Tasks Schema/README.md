# [0015. Tasks Schema](https://github.com/Tdahuyou/TNotes.vscode/tree/main/notes/0015.%20Tasks%20Schema)

<!-- region:toc -->

- [1. 📝 概述](#1--概述)
- [2. 🤔 如何查看 tasks 配置字段都有哪些？](#2--如何查看-tasks-配置字段都有哪些)
- [3. ⚙️ Schema for tasks.json](#3-️-schema-for-tasksjson)
- [4. 🔗 References](#4--references)

<!-- endregion:toc -->

## 1. 📝 概述

- 了解 tasks 的各配置字段的作用
- 知道如何查阅 tasks 的配置字段

## 2. 🤔 如何查看 tasks 配置字段都有哪些？

- 【方式 1】查阅官方文档 - Schema for tasks.json
  - https://code.visualstudio.com/docs/reference/tasks-appendix
- 【方式 2】直接借助 VSCode 智能提示
  - 新建一个 `.vscode/tasks.json` 任务配置文件，输入 `""` 时会弹出智能提示面板。
  - ![图 0](https://cdn.jsdelivr.net/gh/Tdahuyou/imgs@main/2025-07-24-20-37-39.png)
  - 提示面板中一共有 31 个选项，也就是 31 个字段，通过键盘上下键切换到对应项之后会在侧边展示该项的描述信息。

## 3. ⚙️ Schema for tasks.json

::: code-group

```ts [en]
interface TaskConfiguration extends BaseTaskConfiguration {
  /**
   * The configuration's version number
   */
  version: '2.0.0'

  /**
   * Windows specific task configuration
   */
  windows?: BaseTaskConfiguration

  /**
   * macOS specific task configuration
   */
  osx?: BaseTaskConfiguration

  /**
   * Linux specific task configuration
   */
  linux?: BaseTaskConfiguration
}

interface BaseTaskConfiguration {
  /**
   * The type of a custom task. Tasks of type "shell" are executed
   * inside a shell (e.g. bash, cmd, powershell, ...)
   */
  type: 'shell' | 'process'

  /**
   * The command to be executed. Can be an external program or a shell
   * command.
   */
  command: string

  /**
   * Specifies whether a global command is a background task.
   */
  isBackground?: boolean

  /**
   * The command options used when the command is executed. Can be omitted.
   */
  options?: CommandOptions

  /**
   * The arguments passed to the command. Can be omitted.
   */
  args?: string[]

  /**
   * The presentation options.
   */
  presentation?: PresentationOptions

  /**
   * The problem matcher to be used if a global command is executed (e.g. no tasks
   * are defined). A tasks.json file can either contain a global problemMatcher
   * property or a tasks property but not both.
   */
  problemMatcher?: string | ProblemMatcher | (string | ProblemMatcher)[]

  /**
   * The configuration of the available tasks. A tasks.json file can either
   * contain a global problemMatcher property or a tasks property but not both.
   */
  tasks?: TaskDescription[]
}

/**
 * Options to be passed to the external program or shell
 */
export interface CommandOptions {
  /**
   * The current working directory of the executed program or shell.
   * If omitted the current workspace's root is used.
   */
  cwd?: string

  /**
   * The environment of the executed program or shell. If omitted
   * the parent process' environment is used.
   */
  env?: { [key: string]: string }

  /**
   * Configuration of the shell when task type is `shell`
   */
  shell: {
    /**
     * The shell to use.
     */
    executable: string

    /**
     * The arguments to be passed to the shell executable to run in command mode
     * (e.g ['-c'] for bash or ['/S', '/C'] for cmd.exe).
     */
    args?: string[]
  }
}

/**
 * The description of a task.
 */
interface TaskDescription {
  /**
   * The task's name
   */
  label: string

  /**
   * The type of a custom task. Tasks of type "shell" are executed
   * inside a shell (e.g. bash, cmd, powershell, ...)
   */
  type: 'shell' | 'process'

  /**
   * The command to execute. If the type is "shell" it should be the full
   * command line including any additional arguments passed to the command.
   */
  command: string

  /**
   * Whether the executed command is kept alive and runs in the background.
   */
  isBackground?: boolean

  /**
   * Additional arguments passed to the command. Should be used if type
   * is "process".
   */
  args?: string[]

  /**
   * Defines the group to which this task belongs. Also supports to mark
   * a task as the default task in a group.
   */
  group?: 'build' | 'test' | { kind: 'build' | 'test'; isDefault: boolean }

  /**
   * The presentation options.
   */
  presentation?: PresentationOptions

  /**
   * The problem matcher(s) to use to capture problems in the tasks
   * output.
   */
  problemMatcher?: string | ProblemMatcher | (string | ProblemMatcher)[]

  /**
   * Defines when and how a task is run.
   */
  runOptions?: RunOptions
}

interface PresentationOptions {
  /**
   * Controls whether the task output is reveal in the user interface.
   * Defaults to `always`.
   */
  reveal?: 'never' | 'silent' | 'always'

  /**
   * Controls whether the command associated with the task is echoed
   * in the user interface. Defaults to `true`.
   */
  echo?: boolean

  /**
   * Controls whether the panel showing the task output is taking focus.
   * Defaults to `false`.
   */
  focus?: boolean

  /**
   * Controls if the task panel is used for this task only (dedicated),
   * shared between tasks (shared) or if a new panel is created on
   * every task execution (new). Defaults to `shared`.
   */
  panel?: 'shared' | 'dedicated' | 'new'

  /**
   * Controls whether to show the `Terminal will be reused by tasks,
   * press any key to close it` message.
   */
  showReuseMessage?: boolean

  /**
   * Controls whether the terminal is cleared before this task is run.
   * Defaults to `false`.
   */
  clear?: boolean

  /**
   * Controls whether the task is executed in a specific terminal
   * group using split panes. Tasks in the same group (specified by a string value)
   * will use split terminals to present instead of a new terminal panel.
   */
  group?: string
}

/**
 * A description of a problem matcher that detects problems
 * in build output.
 */
interface ProblemMatcher {
  /**
   * The name of a base problem matcher to use. If specified the
   * base problem matcher will be used as a template and properties
   * specified here will replace properties of the base problem
   * matcher
   */
  base?: string

  /**
   * The owner of the produced VS Code problem. This is typically
   * the identifier of a VS Code language service if the problems are
   * to be merged with the one produced by the language service
   * or 'external'. Defaults to 'external' if omitted.
   */
  owner?: string

  /**
   * A human-readable string describing the source of this problem.
   * E.g. 'typescript' or 'super lint'.
   */
  source?: string

  /**
   * The severity of the VS Code problem produced by this problem matcher.
   *
   * Valid values are:
   *   "error": to produce errors.
   *   "warning": to produce warnings.
   *   "info": to produce infos.
   *
   * The value is used if a pattern doesn't specify a severity match group.
   * Defaults to "error" if omitted.
   */
  severity?: string

  /**
   * Defines how filename reported in a problem pattern
   * should be read. Valid values are:
   *  - "absolute": the filename is always treated absolute.
   *  - "relative": the filename is always treated relative to
   *    the current working directory. This is the default.
   *  - ["relative", "path value"]: the filename is always
   *    treated relative to the given path value.
   *  - "autodetect": the filename is treated relative to
   *    the current workspace directory, and if the file
   *    does not exist, it is treated as absolute.
   *  - ["autodetect", "path value"]: the filename is treated
   *    relative to the given path value, and if it does not
   *    exist, it is treated as absolute.
   *  - "search": performs a deep (and, possibly, heavy) file system
   *    search within the directories.
   *  - ["search", {include: ["${workspaceFolder}"]}]: performs
   *    a deep search among the directories given in the "include" array.
   *  - ["search", {include: ["${workspaceFolder}"], exclude: []}]:
   *    performs a deep search among the directories given in the "include"
   *    array, excluding those named in the "exclude" array.
   */
  fileLocation?:
    | string
    | string[]
    | ['search', { include?: string[]; exclude?: string[] }]

  /**
   * The name of a predefined problem pattern, the inline definition
   * of a problem pattern or an array of problem patterns to match
   * problems spread over multiple lines.
   */
  pattern?: string | ProblemPattern | ProblemPattern[]

  /**
   * Additional information used to detect when a background task (like a watching task in Gulp)
   * is active.
   */
  background?: BackgroundMatcher
}

/**
 * A description to track the start and end of a background task.
 */
interface BackgroundMatcher {
  /**
   * If set to true the watcher is in active mode when the task
   * starts. This is equals of issuing a line that matches the
   * beginPattern.
   */
  activeOnStart?: boolean

  /**
   * If matched in the output the start of a background task is signaled.
   */
  beginsPattern?: string

  /**
   * If matched in the output the end of a background task is signaled.
   */
  endsPattern?: string
}

interface ProblemPattern {
  /**
   * The regular expression to find a problem in the console output of an
   * executed task.
   */
  regexp: string

  /**
   * Whether the pattern matches a problem for the whole file or for a location
   * inside a file.
   *
   * Defaults to "location".
   */
  kind?: 'file' | 'location'

  /**
   * The match group index of the filename.
   */
  file: number

  /**
   * The match group index of the problem's location. Valid location
   * patterns are: (line), (line,column) and (startLine,startColumn,endLine,endColumn).
   * If omitted the line and column properties are used.
   */
  location?: number

  /**
   * The match group index of the problem's line in the source file.
   * Can only be omitted if location is specified.
   */
  line?: number

  /**
   * The match group index of the problem's column in the source file.
   */
  column?: number

  /**
   * The match group index of the problem's end line in the source file.
   *
   * Defaults to undefined. No end line is captured.
   */
  endLine?: number

  /**
   * The match group index of the problem's end column in the source file.
   *
   * Defaults to undefined. No end column is captured.
   */
  endColumn?: number

  /**
   * The match group index of the problem's severity.
   *
   * Defaults to undefined. In this case the problem matcher's severity
   * is used.
   */
  severity?: number

  /**
   * The match group index of the problem's code.
   *
   * Defaults to undefined. No code is captured.
   */
  code?: number

  /**
   * The match group index of the message. Defaults to 0.
   */
  message: number

  /**
   * Specifies if the last pattern in a multi line problem matcher should
   * loop as long as it does match a line consequently. Only valid on the
   * last problem pattern in a multi line problem matcher.
   */
  loop?: boolean
}

/**
 * A description to when and how run a task.
 */
interface RunOptions {
  /**
   * Controls how variables are evaluated when a task is executed through
   * the Rerun Last Task command.
   * The default is `true`, meaning that variables will be re-evaluated when
   * a task is rerun. When set to `false`, the resolved variable values from
   * the previous run of the task will be used.
   */
  reevaluateOnRerun?: boolean

  /**
   * Specifies when a task is run.
   *
   * Valid values are:
   *   "default": The task will only be run when executed through the Run Task command.
   *   "folderOpen": The task will be run when the containing folder is opened.
   */
  runOn?: string
}
```

```ts [zh]
interface TaskConfiguration extends BaseTaskConfiguration {
  /**
   * 配置的版本号
   */
  version: '2.0.0'

  /**
   * Windows 特定的任务配置
   */
  windows?: BaseTaskConfiguration

  /**
   * macOS 特定的任务配置
   */
  osx?: BaseTaskConfiguration

  /**
   * Linux 特定的任务配置
   */
  linux?: BaseTaskConfiguration
}

interface BaseTaskConfiguration {
  /**
   * 自定义任务的类型。类型为 "shell" 的任务在 shell 中执行
   * （例如 bash、cmd、powershell 等）
   */
  type: 'shell' | 'process'

  /**
   * 要执行的命令。可以是外部程序或 shell 命令。
   */
  command: string

  /**
   * 指定全局命令是否为后台任务。
   */
  isBackground?: boolean

  /**
   * 执行命令时使用的命令选项。可以省略。
   */
  options?: CommandOptions

  /**
   * 传递给命令的参数。可以省略。
   */
  args?: string[]

  /**
   * 展示选项。
   */
  presentation?: PresentationOptions

  /**
   * 当执行全局命令时使用的问题匹配器（例如未定义任务时）。
   * tasks.json 文件可以包含全局 problemMatcher 属性或 tasks 属性，但不能同时包含两者。
   */
  problemMatcher?: string | ProblemMatcher | (string | ProblemMatcher)[]

  /**
   * 可用任务的配置。tasks.json 文件可以包含全局 problemMatcher 属性或 tasks 属性，但不能同时包含两者。
   */
  tasks?: TaskDescription[]
}

/**
 * 传递给外部程序或 shell 的选项
 */
export interface CommandOptions {
  /**
   * 执行的程序或 shell 的当前工作目录。
   * 如果省略，则使用当前工作区的根目录。
   */
  cwd?: string

  /**
   * 执行的程序或 shell 的环境变量。如果省略
   * 则使用父进程的环境变量。
   */
  env?: { [key: string]: string }

  /**
   * 当任务类型为 `shell` 时的 shell 配置
   */
  shell: {
    /**
     * 要使用的 shell。
     */
    executable: string

    /**
     * 传递给 shell 可执行文件以在命令模式下运行的参数
     * （例如 bash 的 ['-c'] 或 cmd.exe 的 ['/S', '/C']）。
     */
    args?: string[]
  }
}

/**
 * 任务的描述。
 */
interface TaskDescription {
  /**
   * 任务的名称
   */
  label: string

  /**
   * 自定义任务的类型。类型为 "shell" 的任务在 shell 中执行
   * （例如 bash、cmd、powershell 等）
   */
  type: 'shell' | 'process'

  /**
   * 要执行的命令。如果类型是 "shell"，则应为完整的
   * 命令行，包括传递给命令的任何附加参数。
   */
  command: string

  /**
   * 执行的命令是否保持活动状态并在后台运行。
   */
  isBackground?: boolean

  /**
   * 传递给命令的附加参数。如果类型是 "process" 应该使用此选项。
   */
  args?: string[]

  /**
   * 定义此任务所属的组。还支持将任务标记为组中的默认任务。
   */
  group?: 'build' | 'test' | { kind: 'build' | 'test'; isDefault: boolean }

  /**
   * 展示选项。
   */
  presentation?: PresentationOptions

  /**
   * 用于捕获任务输出中问题的问题匹配器。
   */
  problemMatcher?: string | ProblemMatcher | (string | ProblemMatcher)[]

  /**
   * 定义任务何时以及如何运行。
   */
  runOptions?: RunOptions
}

interface PresentationOptions {
  /**
   * 控制任务输出是否在用户界面中显示。
   * 默认为 `always`。
   */
  reveal?: 'never' | 'silent' | 'always'

  /**
   * 控制与任务关联的命令是否在用户界面中回显。
   * 默认为 `true`。
   */
  echo?: boolean

  /**
   * 控制显示任务输出的面板是否获得焦点。
   * 默认为 `false`。
   */
  focus?: boolean

  /**
   * 控制任务面板是仅用于此任务（dedicated）、
   * 在任务间共享（shared）还是每次任务执行时创建新面板（new）。
   * 默认为 `shared`。
   */
  panel?: 'shared' | 'dedicated' | 'new'

  /**
   * 控制是否显示 `Terminal will be reused by tasks,
   * press any key to close it` 消息。
   */
  showReuseMessage?: boolean

  /**
   * 控制在运行此任务之前是否清除终端。
   * 默认为 `false`。
   */
  clear?: boolean

  /**
   * 控制任务是否在特定终端组中使用分割窗格执行。
   * 同一组中的任务（由字符串值指定）将使用分割终端显示，而不是新终端面板。
   */
  group?: string
}

/**
 * 检测构建输出中问题的问题匹配器描述。
 */
interface ProblemMatcher {
  /**
   * 要使用的基础问题匹配器的名称。如果指定，
   * 基础问题匹配器将用作模板，此处指定的属性将替换基础问题匹配器的属性
   */
  base?: string

  /**
   * 产生的 VS Code 问题的所有者。这通常是
   * VS Code 语言服务的标识符（如果问题要与语言服务产生的问题合并）
   * 或 'external'。如果省略，默认为 'external'。
   */
  owner?: string

  /**
   * 描述此问题来源的人类可读字符串。
   * 例如 'typescript' 或 'super lint'。
   */
  source?: string

  /**
   * 此问题匹配器产生的 VS Code 问题的严重性。
   *
   * 有效值为：
   *   "error"：产生错误。
   *   "warning"：产生警告。
   *   "info"：产生信息。
   *
   * 如果模式未指定严重性匹配组，则使用该值。
   * 如果省略，默认为 "error"。
   */
  severity?: string

  /**
   * 定义问题模式中报告的文件名应如何读取。有效值为：
   *  - "absolute"：文件名始终被视为绝对路径。
   *  - "relative"：文件名始终相对于当前工作目录处理。这是默认值。
   *  - ["relative", "路径值"]：文件名始终相对于给定路径值处理。
   *  - "autodetect"：文件名相对于当前工作区目录处理，
   *    如果文件不存在，则视为绝对路径。
   *  - ["autodetect", "路径值"]：文件名相对于给定路径值处理，
   *    如果文件不存在，则视为绝对路径。
   *  - "search"：在目录中执行深度（可能较重的）文件系统搜索。
   *  - ["search", {include: ["${workspaceFolder}"]}]：在 "include" 数组中
   *    给定的目录中执行深度搜索。
   *  - ["search", {include: ["${workspaceFolder}"], exclude: []}]：
   *    在 "include" 数组中给定的目录中执行深度搜索，
   *    排除 "exclude" 数组中命名的目录。
   */
  fileLocation?:
    | string
    | string[]
    | ['search', { include?: string[]; exclude?: string[] }]

  /**
   * 预定义问题模式的名称、问题模式的内联定义或用于匹配
   * 跨多行问题的问题模式数组。
   */
  pattern?: string | ProblemPattern | ProblemPattern[]

  /**
   * 用于检测后台任务（如 Gulp 中的监视任务）何时处于活动状态的附加信息。
   */
  background?: BackgroundMatcher
}

/**
 * 跟踪后台任务开始和结束的描述。
 */
interface BackgroundMatcher {
  /**
   * 如果设置为 true，则任务启动时监视器处于活动模式。
   * 这等同于发出与 beginPattern 匹配的行。
   */
  activeOnStart?: boolean

  /**
   * 如果在输出中匹配到，则表示后台任务开始。
   */
  beginsPattern?: string

  /**
   * 如果在输出中匹配到，则表示后台任务结束。
   */
  endsPattern?: string
}

interface ProblemPattern {
  /**
   * 在执行任务的控制台输出中查找问题的正则表达式。
   */
  regexp: string

  /**
   * 模式是匹配整个文件的问题还是文件内的位置问题。
   *
   * 默认为 "location"。
   */
  kind?: 'file' | 'location'

  /**
   * 文件名的匹配组索引。
   */
  file: number

  /**
   * 问题位置的匹配组索引。有效的位置模式为：
   * (line)、(line,column) 和 (startLine,startColumn,endLine,endColumn)。
   * 如果省略，则使用 line 和 column 属性。
   */
  location?: number

  /**
   * 问题在源文件中的行号匹配组索引。
   * 只有在指定 location 时才可以省略。
   */
  line?: number

  /**
   * 问题在源文件中的列号匹配组索引。
   */
  column?: number

  /**
   * 问题在源文件中的结束行号匹配组索引。
   *
   * 默认为 undefined。不捕获结束行。
   */
  endLine?: number

  /**
   * 问题在源文件中的结束列号匹配组索引。
   *
   * 默认为 undefined。不捕获结束列。
   */
  endColumn?: number

  /**
   * 问题严重性的匹配组索引。
   *
   * 默认为 undefined。在这种情况下使用问题匹配器的严重性。
   */
  severity?: number

  /**
   * 问题代码的匹配组索引。
   *
   * 默认为 undefined。不捕获代码。
   */
  code?: number

  /**
   * 消息的匹配组索引。默认为 0。
   */
  message: number

  /**
   * 指定多行问题匹配器中的最后一个模式是否应连续匹配行时循环。
   * 仅对多行问题匹配器中的最后一个问题模式有效。
   */
  loop?: boolean
}

/**
 * 关于何时以及如何运行任务的描述。
 */
interface RunOptions {
  /**
   * 控制通过重新运行上次任务命令执行任务时如何评估变量。
   * 默认为 `true`，表示重新运行任务时将重新评估变量。
   * 设置为 `false` 时，将使用上次运行任务时解析的变量值。
   */
  reevaluateOnRerun?: boolean

  /**
   * 指定任务何时运行。
   *
   * 有效值为：
   *   "default"：仅在通过运行任务命令执行时才运行任务。
   *   "folderOpen"：在包含文件夹打开时运行任务。
   */
  runOn?: string
}
```

:::

## 4. 🔗 References

- https://code.visualstudio.com/docs/reference/tasks-appendix
  - VSCode 官方文档 - Schema for tasks.json - 用于查阅 tasks 的数据结构
- https://code.visualstudio.com/docs/debugtest/tasks
  - VSCode 官方文档 - Tasks - 用于查阅 tasks 的使用方法
