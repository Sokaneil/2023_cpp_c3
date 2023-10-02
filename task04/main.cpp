#include "pos.hpp"

int main(void)
{
    pos_2d<int> position;
    position.x = 12;
    position.y = 89;
    std::cout << position << "\n";

    pos_3d<float> rotation;
    rotation.x = 0.145;
    rotation.y = 45.2;
    rotation.z = 78.1;
    std::cout << rotation << "\n";
}