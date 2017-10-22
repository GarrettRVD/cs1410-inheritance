// File: diamond
// Created by Garrett Van Dyke on 10/22/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
class A
{
public:
    void func();
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

// Prototypes


// Main Program
int main()
{
    D objD;

    //ojbD.func();                        // ambiguous, won't compile

    return 0;
}

// Function Definitions