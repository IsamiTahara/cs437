#include <iostream>
#include <iomanip>
#include "EmployeeClass.h"

int main()
{
   //TODO: declare an Employee object and set its variables based on the user input then output the received input
   string name;
   float salary;
   int year;

   getline(cin, name);
   cin >> salary;
   cin >> year;

   Employee emp(name, salary, year);
   cout << "Added new employee " << emp.getName() << " with entrance salary: " << fixed << setprecision(2) << emp.getSalary() << endl;
      
   const int SIZE = 4;
   Employee employees[SIZE];

   int i;
   
   cin.ignore();
   for (i = 0; i < SIZE; i++){
      getline(cin, name);
      employees[i].setName(name);
      cin >> salary;
      employees[i].setSalary(salary);
      cin >> year;
      employees[i].setStartYear(year);
      cin.ignore();
   }
   
   cout << "You entered the following employees: " << endl;
   for (i = 0; i < SIZE; i++)
      employees[i].printOut();
      
   int id = 0;
   for (i = 0; i < SIZE; i++){
      if (employees[id].getSalary() < employees[i].getSalary())
         id = i;
   }
   
   cout << employees[id].getName() << " who joined the company in " 
        << employees[id].getStartYear() << " has the highest salary: "
        << employees[id].getSalary() << endl;
   
   return 0;
}
