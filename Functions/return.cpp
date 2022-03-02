#include <iostream>
#include <string>

void func1(int data)
{
    if (data>5)
    {
        if (data==11)
        {
            return;
        }

        std::cout << "/* message1 */" << std::endl;
    }

    std::cout << "/* message2 */" << std::endl;
}

std::string func2(int data)
{
    if (data==11)
        return "That is 11.";

    return "I don't know.";
}

int main(int argc, const char** argv)
{
    int a = 11;

    func1(a);

    std::cout << func2(a) << std::endl;

    return 0;
}