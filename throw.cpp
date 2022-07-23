#include <iostream>
#include <exception>

// std::exception
// An exception and parent class of all the standard C++ exceptions.

// std::bad_alloc
// This can be thrown by new.

// std::bad_cast
// This can be thrown by dynamic_cast.

// std::bad_exception
// This is useful device to handle unexpected exceptions in a C++ program.

// std::bad_typeid
// This can be thrown by typeid.

// std::logic_error
// An exception that theoretically can be detected by reading the code.

// std::domain_error
// This is an exception thrown when a mathematically invalid domain is used.

// std::invalid_argument
// This is thrown due to invalid arguments.

// std::length_error
// This is thrown when a too big std::string is created.

// std::out_of_range
// This can be thrown by the 'at' method, for example a std::vector and std::bitset<>::operator[]().

// std::runtime_error
// An exception that theoretically cannot be detected by reading the code.

// std::overflow_error
// This is thrown if a mathematical overflow occurs.

// std::range_error
// This is occurred when you try to store a value which is out of range.

// std::underflow_error
// This is thrown if a mathematical underflow occurs.

struct MyException : public std::exception
{
    virtual const char* what() const throw()
    {
        return "Division by zero condition!";
    }
};

double division(int a, int b)
{
    if (b == 0)
    {
        throw MyException();
    }

    return (a/b);
}

int main(int argc, char const *argv[])
{
    try 
    {
        std::cout << division(10,0) << std::endl;
    }
    catch(MyException& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
