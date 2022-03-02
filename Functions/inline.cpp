#include <iostream>

inline int max(int first, int second)
{
    if (first>second) return first;
    return second;
}

int main(int argc, const char** argv)
{
    std::cout << max(5, 10) << std::endl;

    // inline function like this
    if (5 > 10) std::cout << 10 << std::endl;
    else std::cout << 5 << std::endl;

    return 0;
}