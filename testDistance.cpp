// File: testDistance
// Created by Garrett Van Dyke on 10/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Distance.h"

using namespace std;

// Constants, Classes, Structures


// Prototypes


// Main Program
int main()
{
    Distance d1;
    Distance d2(12, 2.5);

    cout << "D1 distance is: " << d1.getFeet() << "' " << d1.getInches() << "\"" << endl;
    cout << "D2 distance is: " << d2.getFeet() << "' " << d2.getInches() << "\"" << endl;

    d1.setFeet(9);
    d1.setInches(7.25);

    cout << "D1 distance is: " << d1.getFeet() << "' " << d1.getInches() << "\"" << endl;

    return 0;
}

// Function Definitions