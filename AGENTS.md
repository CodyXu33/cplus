# Repository Guidelines

## 项目结构与模块组织
当前仓库以文档为主：
- `docs/cpp-learning-outline/`：C++ 学习大纲与相关资料。
- `.vscode/`：本地编辑器与调试配置。

若后续加入代码，请使用清晰目录：
- `src/`：业务实现（`.cpp`）
- `include/`：公共头文件（`.hpp`/`.h`）
- `tests/`：单元/集成测试
- `assets/`（可选）：示例输入、静态资源

优先按功能拆分小模块（如 `src/parser/`、`src/io/`），避免单文件过大。

## 构建、测试与开发命令
推荐本地流程（PowerShell）：
- `cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug`：生成 Debug 构建配置。
- `cmake --build build`：编译全部目标。
- `ctest --test-dir build --output-on-failure`：运行测试并输出失败详情。
- `cmake -S . -B build -DCMAKE_BUILD_TYPE=Release`：生成 Release 配置。

若引入新工具（如 `clang-format`、`clang-tidy`），请在本文件和根目录 `README.md` 同步补充命令。

## 代码风格与命名规范
- 缩进：4 个空格，禁止 Tab。
- 语言标准：默认 C++20（无特殊需求不要降级）。
- 命名规则：
  - 类型/类：`PascalCase`
  - 函数/变量：`camelCase`
  - 常量：`kCamelCase`
  - 文件名：小写+下划线（如 `string_utils.cpp`）
- 函数保持单一职责，避免隐式全局状态。

## 测试规范
建议使用 GoogleTest。
- 测试文件：`tests/<module>_test.cpp`
- 用例命名：`Feature_Scenario_ExpectedBehavior`
- 覆盖正常流程、边界条件与非法输入。

提交 PR 前必须本地运行 `ctest`，并确保新增逻辑有对应测试。

## 提交与合并请求规范
当前工作区未检测到 Git 历史，统一使用以下约定：
- Commit 格式：`type(scope): summary`（例如 `feat(parser): add CSV tokenizer`）
- 每次提交聚焦单一变更，保持原子性。
- PR 必须包含：
  - 变更内容与动机
  - 测试结果（命令输出或摘要）
  - 关联任务/Issue 编号
  - 仅在涉及界面或编辑器配置变更时附截图
