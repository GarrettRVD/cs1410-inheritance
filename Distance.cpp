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

/*!
 * Operator : Compares Distance values for equality
 * @param rhs :
 * @return : == operator
 */
bool Distance::operator==(const Distance &rhs) const
{
    return feet == rhs.feet &&
           inches == rhs.inches;
}

/*!
 * Operator : Compares Distance values for inequality
 * @param rhs :
 * @return : != operator
 */
bool Distance::operator!=(const Distance &rhs) const
{
    return !(rhs == *this);
}

/*!
 * Output : Outputs distance values to console
 * @param os : std::ostream
 * @param distance : Distance values
 * @return : output
 */
std::ostream &operator<<(std::ostream &os, const Distance &distance) {
    os << "feet: " << distance.feet << " inches: " << distance.inches;
    return os;
}

/*!
 * DistSign : Default Constructor
 */
DistSign::DistSign()
{
    sign = pos;
}

/*!
 * DistSign : 3 parameter Constructor
 * @param feet : Initial DistSign feet
 * @param inches : Initial DistSign inches
 * @param sign : Initial DistSign sign
 */
DistSign::DistSign(int feet, float inches, posneg sign) : Distance(feet, inches), sign(sign) {}

/*!
 * getSign : Getter for sign variable
 * @return : current sign
 */
posneg DistSign::getSign() const
{
    return sign;
}

/*!
 * setSign : Setter for sign variable
 * @param sign : value to set sign
 */
void DistSign::setSign(posneg sign)
{
    DistSign::sign = sign;
}

/*!
 * Output : Outputs sign value to console
 * @param os : std::ostream
 * @param sign : sign value
 * @return : output
 */
std::ostream &operator<<(std::ostream &os, const DistSign &sign)
{
    os << static_cast<const Distance &>(sign) << " sign: " << sign.sign;
    return os;
}
