//
// Created by GRees on 10/22/2017.
//

#include "Scientist.h"

void Scientist::setData()
{
    Employee::setData();

    cout << "\nEnter the number of pubs: ";
    cin >> pubs;
}

void Scientist::getData()
{
    Employee::getData();

    cout << "\nNumber of publications: " << pubs;
}
