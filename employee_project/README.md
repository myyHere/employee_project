# Employee Project

📌 **简介**

这是一个简单的 C++ 示例项目，用于演示面向对象的设计：
- 基类 `Employee`，以及派生类 `Developer` 和 `Manager`。
- 展示了多态、虚函数、纯虚函数、拷贝构造、拷贝赋值与资源管理（动态内存）的用法。

---

## 🔧 特性

- 使用类继承和虚函数实现统一接口
- 自定义拷贝构造函数与拷贝赋值以正确管理动态分配的字符数组
- 通过 `main.cpp` 展示创建对象、使用基类指针数组多态访问与内存清理示例

---

## 📁 项目结构

```
Makefile
README.md
src/
  developer.cpp
  developer.h
  employee.cpp
  employee.h
  main.cpp
  manager.cpp
  manager.h
```

主要源码位于 `src/` 中：
- `employee.*`：基类定义与实现
- `developer.*`：Developer 类，添加 `programmingLanguage` 字段与奖励计算
- `manager.*`：Manager 类，添加 `teamSize` 字段与奖励计算
- `main.cpp`：演示用例

---

## 🛠 构建（示例）

推荐使用 g++ 或者在 Windows 上使用 MinGW/MSYS2。如果使用 MSVC，请使用对应的 `cl` 命令或 Visual Studio 生成。

在项目根目录运行（GNU 工具链示例）：

```bash
# 在 Unix / MSYS2 / MinGW 环境
g++ -std=c++11 src/*.cpp -o employee_app
# 运行
./employee_app
```

在 Windows CMD（MSVC）示例：

```powershell
# 在开发者命令提示符
cl /EHsc src\*.cpp /Fe:employee_app.exe
employee_app.exe
```

> 如果想把可执行文件放到 `bin/`，可以先创建 `bin` 文件夹并更新输出路径：
> `g++ -std=c++11 src/*.cpp -o bin/employee_app`

---

## ▶️ 使用示例

运行程序后会输出示例员工信息并展示多态与拷贝控制行为。例如：

```
ID: 1001
Name: 张三
Base Salary: 12000
Programming Language: C++
...
```

---

## ✅ 注意事项

- 本项目为教学/练习用途，未包含单元测试或 CI 配置。
- `Makefile` 当前为空；可按需添加编译规则或改用 `CMake`。

---

## 🤝 贡献

欢迎提交 Issue 或 Pull Request：
1. Fork 仓库
2. 新分支提交修改（`git checkout -b feature/xxx`）
3. 提交并发起 PR

请在 PR 中包含变更说明与可复现步骤。

---

## 📜 许可证

本仓库默认采用 **MIT License**（或根据需要替换为其它许可证）。

---

