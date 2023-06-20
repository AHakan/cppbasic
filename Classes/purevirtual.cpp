/**
 * @file purevirtual.cpp
 * @author ahakan
 * @brief All of the virtual functions we have written have a body (a definition).
 *          However, C++ allows you to create a special kind of virtual function 
 *          called a pure virtual function (or abstract function) that 
 *          has no body at all! A pure virtual function simply acts 
 *          as a placeholder that is meant to be redefined by derived classes.
 * @version 0.1
 * @date 2023-06-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

class Base
{
    public:
        Base() { std::cout << "Base constructor." << std::endl; };
        virtual void getName() const { std::cout << "Base." << std::endl; };
        virtual void getData() const = 0;
};

class Derival: public Base
{
    public:
        Derival() { std::cout << "Derival constructor." << std::endl; };
        void getName() const override { std::cout << "Derival." << std::endl; };
        virtual void getData() const override { std::cout << "Pure virtual." << std::endl; };
};  

int main(int argc, char const *argv[])
{
    // Base b; => It causes an error that is pure virtual function declaration.
    
    Derival d;

    d.getData();

    return 0;
}
