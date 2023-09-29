#include "add_and_print.hpp"

int main(void)
{
    add_and_print(1, 3);
    add_and_print<std::string>(std::string{"hello "}, std::string{"world!"});
    add_and_print<int, float>(1, 3.1); 
}