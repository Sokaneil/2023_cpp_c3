#ifndef MAX_HPP_
#define MAX_HPP_

#include <iostream>
#include <string>

template <typename T1, typename T2>
auto max(T1 a, T2 b)
{
    return (a >= b) ? b : a;
}

#endif /* MAX_HPP_*/