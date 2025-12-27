
#include "developer.h"
#include "employee.h"
#include "manager.h"
int main() {
    // SetConsoleOutputCP(CP_UTF8);
    // 1. 基础测试：创建和显示
    Employee* dev = new Developer("张三", 1001, 12000, "C++");
    Employee* mgr = new Manager("李四", 2001, 15000, 8);

    dev->displayInfo();
    mgr->displayInfo();

    // 2. 多态测试：使用基类指针数组
    Employee* team[3];
    team[0] = new Developer("王五", 1002, 11000, "Python");
    team[1] = new Manager("赵六", 2002, 16000, 5);
    team[2] = new Developer("钱七", 1003, 13000, "Java");

    for(int i = 0; i < 3; i++) {
        team[i]->displayInfo();
        delete team[i];
    }

    // 3. 拷贝控制测试
    Developer dev1("孙八", 1004, 14000, "C++");
    Developer dev2 = dev1;  // 拷贝构造
    Developer dev3("周九", 1005, 15000, "Go");
    dev1 = dev3;  // 拷贝赋值

    // 4. 清理
    delete dev;
    delete mgr;

    return 0;
}