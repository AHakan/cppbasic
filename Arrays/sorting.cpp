#include <iostream>
#include <algorithm>    // for std::short()

void swap(uint8_t *first, uint8_t *second)
{
    uint8_t third = *first;
    *first = *second;
    *second = third;
}

int main(int argc, const char** argv)
{
    uint8_t array[] = {1, 4, 3, 7, 2, 6, 8, 5};
    uint8_t array2[] = {1, 4, 3, 7, 2, 6, 8, 5};
    uint8_t arraySize = sizeof(array) / sizeof(array[0]);

    // manuel sorting
    for (size_t i = 0; i < arraySize-1; ++i)
    {
        uint8_t smallestIndex = i;

        for (size_t k = i + 1; k < arraySize; ++k)
        {
            if (array[k] < array[smallestIndex])
            {
                smallestIndex = k;
            }
        }
        swap(&array[i], &array[smallestIndex]);
    }

    for (size_t i = 0; i < arraySize; i++)
    {
        std::cout << unsigned(array[i]) << ' ';
    }
    std::cout << std::endl;


    // sorting with sort function
    std::sort(std::begin(array2), std::end(array2));    //sort function

    for (size_t i = 0; i < arraySize; i++)
    {
        std::cout << unsigned(array[i]) << ' ';
    }
    std::cout << std::endl;

    return 0;
}
