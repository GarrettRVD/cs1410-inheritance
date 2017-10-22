// File: testEmployee
// Created by Garrett Van Dyke on 10/22/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Scientist.h"
#include "Laborer.h"

using namespace std;

// Constants, Classes, Structures


// Prototypes


// Main Program
int main()
{
    Employee e1;
    e1.setData();
    e1.getData();

    Manager m1;
    m1.setData();
    m1.getData();

    Scientist s1;
    s1.setData();
    s1.getData();

    Laborer l1;
    l1.setData();
    l1.getData();

    Foreman f1;
    f1.setData();
    f1.getData();

    return 0;
}

// Function Definitions