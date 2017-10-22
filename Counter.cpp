//
// Created by GRees on 10/21/2017.
//

#include "Counter.h"

Counter::Counter(unsigned int count) : count(count) {}

Counter::Counter() : count(0) {}

unsigned int Counter::getCount() const
{
    return count;
}

void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}

Counter Counter::operator++()
{
    return Counter(++count);
}

Counter CountDown::operator--()
{
    return Counter(--count);
}
