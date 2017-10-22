//
// Created by GRees on 10/21/2017.
//

#ifndef INHERITANCE_DISTANCE_H
#define INHERITANCE_DISTANCE_H


class Distance
{
protected:
    int feet;
    float inches;
public:
    Distance();                         // Constructor no arguments
    Distance(int feet, float inches);   // Constructor two argument

    int getFeet() const;

    float getInches() const;

    void setFeet(int feet);

    void setInches(float inches);

};


#endif //INHERITANCE_DISTANCE_H
