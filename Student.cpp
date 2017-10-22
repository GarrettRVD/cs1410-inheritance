//
// Created by GRees on 10/22/2017.
//

#include "Student.h"

void Student::setEducation()
{
    cout << "\nEnter name of school or university: ";
    cin >> school;
    cin.ignore();

    cout << "\nEnter highest degree earned\n";
    cout << "   (High School, BS, Master, Ph.D): ";
    cin >> degree;
    cin.ignore();
}

void Student::getEducation()
{
    cout << "\nSchool or University: " << school;
    cout << "\nHighest degree earned: " << degree;
}
