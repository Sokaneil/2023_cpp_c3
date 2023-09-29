#include "hello.hpp"

void hello()
{
    std::cout << "Hello stranger!" << std::endl;
}

void hello(const std::string name)
{
    std::cout << "Hello " << name << "!" << std::endl;
}