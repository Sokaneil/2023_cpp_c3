#include "max.hpp"
#include "min.hpp"

int main(void)
{
    std::cout << min(1, 3) << std::endl;
    std::cout << max(3, 1) << std::endl;
    std::cout << max<std::string>(std::string{"hello "}, std::string{"world!"})
              << std::endl;
    std::cout << min<int, float>(1, 3.1) << std::endl;
    std::cout << max<int, float>(1, 3.1) << std::endl;
}