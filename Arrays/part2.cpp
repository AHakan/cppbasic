#include <iostream>
#include <iterator>

// enum class studentNames
// {
//     ali,
//     veli,
//     can,
//     ayse,
//     fatma,
//     max
// };

enum studentNames
{
    ali,
    veli,
    can,
    ayse,
    fatma,
    max
};

void printSize(int array[])
{
    std::cout << sizeof(array)/sizeof(array[0]) << std::endl;
}

int main(int argc, const char** argv)
{
    int array[]{1,2,3,4,5,6,7,8,9,10};

    int arrayByte = sizeof(array);
    int integerByte = sizeof(array[0]);

    // int arraySize = sizeof(array)/sizeof(array[0]);
    int arraySize = arrayByte / integerByte;

    std::cout << arraySize << std::endl; // return 10

    std::cout << std::size(array) << std::endl; // return 10

    // printSize(array); // return 2

    // enum class doesn't work
    // int testScores[studentNames::max]{}; // allocate 6 int
    // testScores[studentNames::ali] = 80; // error

    // enum works
    int testScores[studentNames::max]{}; // allocate 6 int
    testScores[ali] = 80;

    return 0;
}