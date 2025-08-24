# MordloxEngine

MordloxEngine 是一个使用 C++20 开发的轻量级游戏引擎。它旨在提供一个模块化且高性能的框架，用于构建各种应用程序，从简单的演示到复杂的游戏。

## 特性

*   **模块化架构**: 易于扩展和维护。
*   **跨平台支持**: (待定，如果支持则添加)
*   **渲染系统**: (待定，如果已知渲染API则添加，例如OpenGL/Vulkan/DirectX)
*   **事件系统**: 灵活的事件处理机制。
*   **沙盒应用**: 包含一个示例沙盒应用程序，用于演示引擎功能。

## 技术栈

*   **C++20**: 利用最新的 C++ 标准特性，如模块、协程等。
*   **Visual Studio**: 主要开发环境。
*   **CMake**: (如果使用 CMake 构建，则添加)

## 构建说明

### 先决条件

*   **Visual Studio 2022 或更高版本**: 确保安装了 C++ 桌面开发工作负载。
*   **Git**: 用于克隆仓库。

### 克隆仓库

```bash
git clone https://github.com/your-username/MordloxEngine.git
cd MordloxEngine
```

### 构建项目

1.  打开 `MordloxEngine.sln` 文件。
2.  在 Visual Studio 中，选择所需的配置（例如 `Debug` 或 `Release`）和平台（例如 `x64`）。
3.  右键点击解决方案资源管理器中的 `MordloxEngine` 或 `Sandbox` 项目，然后选择 `构建`。

### 运行沙盒应用

构建成功后，您可以将 `Sandbox` 项目设置为启动项目，然后运行它来查看引擎的示例。

## 目录结构

*   `MordloxEngine/`: 引擎核心源代码。
    *   `src/`: 引擎的头文件和源文件。
*   `Sandbox/`: 示例应用程序，演示如何使用 MordloxEngine。
    *   `src/`: 沙盒应用程序的源文件。
*   `bin/`: 编译后的可执行文件和库。
*   `bin-int/`: 中间构建文件。
*   `LICENSE`: 许可证文件。
*   `README.md`: 本文件。

## 贡献

欢迎贡献！如果您有任何改进建议或发现错误，请随时提交 Pull Request 或创建 Issue。

## 许可证

[![CC BY-NC-ND 4.0][cc-by-nc-nd-image]][cc-by-nc-nd]

[cc-by-nc-nd]: http://creativecommons.org/licenses/by-nc-nd/4.0/
[cc-by-nc-nd-image]: https://licensebuttons.net/l/by-nc-nd/4.0/88x31.png
[cc-by-nc-nd-shield]: https://img.shields.io/badge/License-CC%20BY--NC--ND%204.0-lightgrey.svg
