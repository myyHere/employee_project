#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "employee.h"
class Developer : public Employee {
   private:
    char* programmingLanguage;

   public:
    Developer(const char* name, int id, double baseSalary, const char* programmingLanguage);
    ~Developer();
    Developer(const Developer& other);
    Developer& operator=(const Developer& other);
    double calculateBonus() const override;
    void displayInfo() const;
};
#endif