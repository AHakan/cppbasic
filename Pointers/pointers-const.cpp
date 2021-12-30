#include <iostream>


void f(const int * nCPtr)
{
    *nCPtr = 100;   // that's error
}

int main(int argc, const char** argv)
{
    // constant pointer and non-constant variable
    int nonConstantVariable = 5, nonConstantVariable2 = 6;

    int * const constantPtr = &nonConstantVariable;

    *constantPtr = 10;  // that's ok.
    // constantPtr = &nonConstantVariable2;     // that's error. because pointer is a const.
    std::cout << *constantPtr << std::endl;


    // non-constant pointer and constant variable
    int * nonConstantPtr = &nonConstantVariable;

    f(nonConstantPtr);


    // constant pointer and constant variable
    const int *const constantPtr2 = &nonConstantVariable;

    *constantPtr2 = nonConstantVariable2;   // error
    *constantPtr2 = &nonConstantVariable2;  // error


    return 0;
}
