#include "manager.h"
Manager::Manager(const char* name, int id, double baseSalary, int teamSize) : Employee(name, id, baseSalary), teamSize(teamSize) {}
Manager::~Manager() {}
Manager::Manager(const Manager& other) : Employee(other), teamSize(other.teamSize) {}
Manager& Manager::operator=(const Manager& other) {
    if(this != &other) {
        Employee::operator=(other);
        teamSize = other.teamSize;
    }
    return *this;
}
double Manager::calculateBonus() const {
    return baseSalary * 0.3 + teamSize * 1000;
}
void Manager::displayInfo() const {
    Employee::displayInfo();
    std::cout << "Team Size: " << teamSize << std::endl;
}