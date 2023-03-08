#ifndef EMPLOYEE_CLASS_H
#define EMPLOYEE_CLASS_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    float salary;
    int startYear;

public:
    Employee(); 
    Employee(string name, float salary, int startYear); 

    string getName();
    float getSalary();
    int getStartYear();

    void setName(string name);
    void setSalary(float salary);
    void setStartYear(int startYear);

    void printOut();
};

#endif
