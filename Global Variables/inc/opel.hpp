#pragma once

#include <iostream>

namespace Opel
{
    struct GVariables
    {
        uint32_t globalX = 0;
        uint32_t globalY = 0;

        GVariables(uint32_t x, uint32_t y)
        {
            globalX = x;
            globalY = y;

            std::cout << "GVariables constructor" << std::endl;
        }
    };

    namespace Opels
    {
        inline GVariables ExVar{15, 20};
    }

};