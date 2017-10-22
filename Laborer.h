//
// Created by GRees on 10/22/2017.
//

#ifndef INHERITANCE_LABORER_H
#define INHERITANCE_LABORER_H


#include "Employee.h"

class Laborer : public Employee
{

};

class Foreman: public Laborer
{
private:
    float quotas;                       // percent of quotas met
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_LABORER_H
