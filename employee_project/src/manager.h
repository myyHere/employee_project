#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"
class Manager : public Employee {
   private:
    int teamSize;

   public:
    Manager(const char* name, int id, double baseSalary, int teamSize);
    ~Manager();
    Manager(const Manager& other);
    Manager& operator=(const Manager& other);
    double calculateBonus() const override;
    void displayInfo() const;
};
#endif