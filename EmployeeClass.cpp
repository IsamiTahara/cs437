#include "EmployeeClass.h"
#include <iostream>
#include <iomanip>
using namespace std;

Employee::Employee() {
    name = "Unknown";
    salary = 0;
    startYear = 2021;
}

Employee::Employee(string name, float salary, int startYear) {
    this->name = name;
    this->salary = salary;
    this->startYear = startYear;
}

string Employee::getName() {
    return name;
}

float Employee::getSalary() {
    return salary;
}

int Employee::getStartYear() {
    return startYear;
}

void Employee::setName(string name) {
    this->name = name;
}

void Employee::setSalary(float salary) {
    this->salary = salary;
}

void Employee::setStartYear(int startYear) {
    this->startYear = startYear;
}

void Employee::printOut() {
    cout << name << " joined the company in " << startYear << ", current salary: " << fixed << setprecision(2) << salary << endl;
}
