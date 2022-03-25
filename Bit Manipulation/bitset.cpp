#include <iostream>
#include <bitset>


int main(int argc, const char** argv)
{
    std::bitset<8> mybits{15};

    std::cout << mybits << std::endl;     // 0000 1111

    std::bitset<8> bits{0b0000'0111};

    std::cout << bits << std::endl;     // 0000 0111

    // allows us to turn a bit on (this will do nothing if the bit is already on)
    bits.set(3);

    std::cout << bits << std::endl;     // 0000 1111

    // allows us to flip a bit value from a 0 to a 1 or vice versa
    bits.flip(5);

    std::cout << bits << std::endl;     // 0010 1111

    // allows us to turn a bit off (this will do nothing if the bit is already off)
    bits.reset(5);

    std::cout << bits << std::endl;     // 0000 1111

    return 0;
}