#include <iostream>

#include "../inc/opel.hpp"
#include "../inc/subclass.hpp"

int main(int argc, char const *argv[])
{
    SubClass::SecondClass::LocalClass;

    std::cout << &Opel::Opels::ExVar << std::endl;
    std::cout << Opel::Opels::ExVar.globalX << std::endl;


    // std::cout << SubClass::SecondClass::LocalClass.localX << std::endl;


    return 0;
}
