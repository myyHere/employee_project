// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <cstring>
#include <iostream>
class Employee {
   protected:
    char* name;
    int id;
    double baseSalary;

   public:
    Employee(const char* name, int id, double baseSalary);

    // 拷贝构造函数
    Employee(const Employee& other);

    Employee& operator=(const Employee& other);
    // 析构函数
    virtual ~Employee();

    virtual void displayInfo() const;
    virtual double calculateBonus() const = 0;
};
#endif