#ifndef POS_HPP_
#define POS_HPP_

#include <iostream>
#include <string>

template <typename T>
struct pos_2d {
    T x;
    T y;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const pos_2d<T> &rhs)
{
    os << "pos_2d : " << rhs.x << ", " << rhs.y;
    return os;
}

template <typename T>
struct pos_3d {
    T x;
    T y;
    T z;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const pos_3d<T> &rhs)
{
    os << "pos_3d : " << rhs.x << ", " << rhs.y << ", " << rhs.z;
    return os;
}

#endif /* POS_HPP_*/