#include <iostream>
#include <bitset>


int main(int argc, const char** argv)
{
    std::bitset<8> bits{0b0000'0110};

    std::cout << bits << std::endl;     // 0000 0110

    // left shift
    std::cout << ( bits << 1 ) << std::endl;     // 0000 1100

    // right shift
    std::cout << ( bits >> 1 ) << std::endl;     // 0000 0011


    unsigned int x {0b0000'0011};

    x = x << 1;

    std::cout << std::bitset<8>{x} << std::endl;     // 0000 0110

    std::cout << x << std::endl;                     // 6

    // not
    std::cout << ~std::bitset<8>{x} << std::endl;     // 1111 1001

    // or
    std::cout << ( std::bitset<4>{0b0101} | std::bitset<4>{0b0011} ) << std:: endl;     // 0111

    // and
    std::cout << ( std::bitset<4>{0b0101} & std::bitset<4>{0b0011} ) << std:: endl;     // 0001

    // xor
    std::cout << ( std::bitset<4>{0b0101} ^ std::bitset<4>{0b0011} ^ std::bitset<4>{0b1000} ) << std:: endl;     // 1110

    return 0;
}