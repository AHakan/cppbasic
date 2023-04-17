#include <iostream>

#include "opel.hpp"

namespace SubClass
{
    struct SubClasses
    {
        uint32_t localX = 0;

        SubClasses(uint32_t x)
        {
            localX = x;
            std::cout << "SubClasses constructor." << std::endl;

            std::cout << &Opel::Opels::ExVar << std::endl;
            std::cout << Opel::Opels::ExVar.globalX << std::endl;

        }
    };

    namespace SecondClass
    {
        SubClasses LocalClass(5);
    }
};