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

    cout << d1 << endl;
    cout << d2 << endl;

    cout << "D1 distance is: " << d1.getFeet() << "' " << d1.getInches() << "\"" << endl;
    cout << "D2 distance is: " << d2.getFeet() << "' " << d2.getInches() << "\"" << endl;

    d1.setFeet(9);
    d1.setInches(7.25);

    cout << "D1 distance is: " << d1.getFeet() << "' " << d1.getInches() << "\"" << endl;

    if (d1 == d2)
    {
        cout << "The same" << endl;
    }
    else
    {
        cout << "Done" << endl;
    }

    DistSign alpha;
    cout << alpha << endl;

    return 0;
}

// Function Definitions