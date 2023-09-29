#ifndef ADD_AND_PRINT_HPP_
#define ADD_AND_PRINT_HPP_

#include <iostream>
#include <string>

template <typename T1, typename T2>
auto add_and_print(T1 a, T2 b)
{
    auto result = a + b;
    std::cout << result << std::endl;
    return result;
}

#endif /* ADD_AND_PRINT_HPP_*/