#include "developer.h"
Developer::Developer(const char* name, int id, double baseSalary, const char* programmingLanguage) : Employee(name, id, baseSalary) {
    this->programmingLanguage = new char[strlen(programmingLanguage) + 1];
    strcpy(this->programmingLanguage, programmingLanguage);
}
Developer::~Developer() {
    delete[] programmingLanguage;
}
Developer::Developer(const Developer& other) : Employee(other) {
    programmingLanguage = new char[strlen(other.programmingLanguage) + 1];
    strcpy(programmingLanguage, other.programmingLanguage);
}
Developer& Developer::operator=(const Developer& other) {
    if(this != &other) {
        Employee::operator=(other);
        delete[] this->programmingLanguage;
        this->programmingLanguage = new char[strlen(other.programmingLanguage) + 1];
        strcpy(this->programmingLanguage, other.programmingLanguage);
    }
    return *this;
}
double Developer::calculateBonus() const {
    return baseSalary * 0.2 + 5000 * (strcmp(programmingLanguage, "C++") == 0);
}
void Developer::displayInfo() const {
    Employee::displayInfo();
    std::cout << "Programming Language: " << programmingLanguage << std::endl;
}