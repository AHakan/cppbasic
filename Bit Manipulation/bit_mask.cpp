#include <iostream>
#include <cstdint>

int main(int argc, const char** argv)
{
    constexpr std::uint8_t mask0{ 0b0000'0001 }; // represents bit 0
	constexpr std::uint8_t mask1{ 0b0000'0010 }; // represents bit 1
	constexpr std::uint8_t mask2{ 0b0000'0100 }; // represents bit 2
	constexpr std::uint8_t mask3{ 0b0000'1000 }; // represents bit 3
	constexpr std::uint8_t mask4{ 0b0001'0000 }; // represents bit 4
	constexpr std::uint8_t mask5{ 0b0010'0000 }; // represents bit 5
	constexpr std::uint8_t mask6{ 0b0100'0000 }; // represents bit 6
	constexpr std::uint8_t mask7{ 0b1000'0000 }; // represents bit 7

    std::uint8_t flags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags

    std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");


	std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");

    flags |= mask1; // turn on bit 1

    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");



    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");

    flags &= ~mask2; // turn off bit 2

    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");



    std::cout << "bit 3 is " << ((flags & mask3) ? "on\n" : "off\n");

    flags ^= mask3; // flip bit 3

    std::cout << "bit 3 is " << ((flags & mask3) ? "on\n" : "off\n");

    flags ^= mask3; // flip bit 3

    std::cout << "bit 3 is " << ((flags & mask3) ? "on\n" : "off\n");

    return 0;
}