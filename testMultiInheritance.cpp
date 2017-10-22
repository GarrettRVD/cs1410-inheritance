// File: testMultiInheritance
// Created by Garrett Van Dyke on 10/22/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
class A
{
public:
    void Show();
};

void A::Show()
{
    cout << "Class A\n";
}

class B
{
public:
    void Show();
};

void B::Show()
{
    cout << "Class B\n";
}

class C : public A, public B
{

};

// Prototypes


// Main Program
int main()
{
    C objC;                         // object C
    //objC.Show();

    objC.A::Show();
    objC.B::Show();

    return 0;
}

// Function Definitions