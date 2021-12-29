#include <iostream>

int squareByValue(int n)
{
    return n*n;
}

void squareByReference(int *nPtr)
{
    std::cout << nPtr << std::endl; // address

    *nPtr = *nPtr * *nPtr;
}

void sumElements(int *arr)  // void sumElements(int arr[]) // same definition
{
    std::cout << arr << std::endl; //address
    std::cout << arr[0] << std::endl;

    // if we don't want to change array elements
    // we must define the function parameter with const
    // void sumElements(const int *arr)
    arr[3] = 12;
}

int main(int argc, const char** argv)
{
    int i = 5;

    std::cout << "Call by value: " << squareByValue(i) << "\n";

    squareByReference(&i);

    std::cout << "Call by reference: " << i << std::endl;

    int arr[5] = {1, 2, 3, 4, 5};

    sumElements(arr);

    std::cout << arr[3] << std::endl;   // 12

    return 0;
}