#include <iostream>

int main(int argc, const char** argv)
{
    int array[4][5]
    {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {6, 7, 8, 9, 10},
        {10, 9, 8, 7, 6}
    };

    int array2[][5]
    {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {6, 7, 8, 9, 10},
        {10, 9, 8, 7, 6}
    };

    for (size_t r = 0; r < 4; r++)
    {
        for (size_t c = 0; c < 5; c++)
        {
            std::cout << array[r][c] << " ";
        }
        std::cout << std::endl;
    }

    for (size_t r = 0; r < 4; r++)
    {
        for (size_t c = 0; c < 5; c++)
        {
            std::cout << array2[r][c] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
