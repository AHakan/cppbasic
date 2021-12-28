#include <iostream>

int main(int argc, const char** argv)
{
    double x = 5.0;
    double *xPtr = &x;
    double *yPtr = nullptr; //safe definition

    std::cout << "The value of X is: " << x << "\n"
              << "The value of xPtr is: " << xPtr << "\n"
              << "The value of *xPtr is: " << *xPtr << std::endl;

    *xPtr = 9.2;

    // *yPtr = 5.1; // This is nullptr. Error.

    std::cout << "The value of X is: " << x << "\n"
              << "The value of xPtr is: " << xPtr << "\n"
              << "The value of *xPtr is: " << *xPtr << std::endl;

    return 0;
}