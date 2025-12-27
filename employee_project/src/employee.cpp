#include "employee.h"
Employee::Employee(const char* name, int id, double baseSalary) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->id = id;
    this->baseSalary = baseSalary;
}
Employee::Employee(const Employee& other) {
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
    this->id = other.id;
    this->baseSalary = other.baseSalary;
}
Employee& Employee::operator=(const Employee& other) {
    if(this != &other) {
        delete[] this->name;
        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
        this->id = other.id;
        this->baseSalary = other.baseSalary;
    }
    return *this;
}
Employee::~Employee() {
    delete[] name;
}
void Employee::displayInfo() const {
    std::cout << "ID: " << id << "\nName: " << name << "\nBase Salary: " << baseSalary << std::endl;
}