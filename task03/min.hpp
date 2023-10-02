#ifndef MIN_HPP_
#define MIN_HPP_

#include <iostream>
#include <string>

template <typename T1, typename T2>
auto min(T1 a, T2 b)
{
    return (a <= b) ? a : b;
}

#endif /* MIN_HPP_*/