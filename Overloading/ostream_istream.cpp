#include<iostream>
#include <istream>
#include <string>
#include <iomanip>


class PhoneNumber
{
    friend std::ostream &operator<<(std::ostream &output, const PhoneNumber &number)
    {
        output << "+" << number.areaCode << number.exchange << number.line;

        return output;
    }

    friend std::istream &operator>>(std::istream &input, PhoneNumber &number)
    {
        input.ignore(); // ignore to (
        input >> std::setw(2) >> number.areaCode;
        input.ignore(2); // ignore to ) and space
        input >> std::setw(3) >> number.exchange;
        input.ignore(); // ignore to -
        input >> std::setw(7) >> number.line;

        return input;
    }   

    private:
        std::string areaCode;
        std::string exchange;
        std::string line;
};


int main(int argc, char **argv) 
{
    PhoneNumber phone;

    std::cout << "Please enter phone number in the form (90) 555-5554433: ";

    std::cin >> phone;

    std::cout << phone << std::endl;

    return 0;
}