#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee &emp)
{
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: " << emp.salary << endl;
}

int main()
{
    vector<Employee> employees = {
        {101, "Hitesh", 100000},
        {101, "Sarthak", 100000},
        {101, "Sami", 100000},
        {101, "Preet", 10000},
        {101, "Anubhav", 60000},
        {101, "Varad", 40000},
        {101, "Sarthak", 30000},
    };

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employees sorted by salary (Highest to lowest)" << endl;
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(employees.begin(),
            employees.end(),
            back_inserter(highEarners),
            [](const Employee &e)
            { return e.salary > 50000; });

    cout << "Employees who are High Earners" << endl;
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee &e)
                                    { return sum + e.salary; });

    double avgSalary = totalSalary / employees.size();

    cout << "Average salary is : " << avgSalary << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
                                   { return e1.salary < e2.salary; });

    return 0;
}