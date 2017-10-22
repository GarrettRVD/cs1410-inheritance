//
// Created by GRees on 10/21/2017.
//

#include "Distance.h"

/*!
 * Distance : Default Constructor
 */
Distance::Distance() : feet(0), inches(0) {}

/*!
 * Distance : 2 parameter Constructor
 * @param feet : Initial Distance feet
 * @param inches : Initial Distance inches
 */
Distance::Distance(int feet, float inches) : feet(feet), inches(inches) {}

/*!
 * getFeet : Getter for feet variable
 * @return : current feet
 */
int Distance::getFeet() const
{
    return feet;
}

/*!
 * getInches : Getter for inches variable
 * @return : current inches
 */
float Distance::getInches() const
{
    return inches;
}

/*!
 * setFeet : Setter for feet variable
 * @param feet : Number to set feet
 */
void Distance::setFeet(int feet)
{
    Distance::feet = feet;
}

/*!
 * setInches : Setter for inches variable
 * @param inches : Number to set inches
 */
void Distance::setInches(float inches)
{
    Distance::inches = inches;
}
