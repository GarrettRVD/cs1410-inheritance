//
// Created by GRees on 10/21/2017.
//

#include "Counter.h"

// Doxygen comments. Type /*! or /** followed by Enter
/*!
 * Counter: 1 parameter Constructor
 * @param count : Initial counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default Constructor
 */
Counter::Counter() : count(0) {}

/*!
 * getCount : Getter for count variable
 * @return : current count
 */
unsigned int Counter::getCount() const
{
    return count;
}

/*!
 * setCount : Set current count
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}

/*!
 * ++ Operator : Increments counter
 * @return : ++counter
 */
Counter Counter::operator++()
{
    return Counter(++count);
}

/*!
 * CountDown -- Operator
 * @return : Decrements operator
 */
Counter CountDown::operator--()
{
    return Counter(--count);
}

/*!
 * CountDown Default Constructor
 */
CountDown::CountDown() : Counter() {}

/*!
 * CountDown 1 parameter Constructor
 * @param count : Initial Counter
 */
CountDown::CountDown(unsigned int count) : Counter(count) {}
