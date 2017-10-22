//
// Created by GRees on 10/22/2017.
//

#include "Employee.h"

void Employee::setData()
{
    cout << "\nEnter Last Name: ";
    cin >> name;
    cin.ignore();

    cout << "\nEnter ID Number: ";
    cin >> number;
}

void Employee::getData()
{
    cout << "\nName: " << name;
    cout << "\nID Number: " << number;
}
