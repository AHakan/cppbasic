#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    char message[] = "Hello, world!";
    char message2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'};    // same definition

    char inputName[20];

    const char * messagePtr = "Hello, world!";

    size_t arraySize = sizeof(message) / sizeof(char);

    std::cout << arraySize << "\n";

    for (size_t i = 0; i < arraySize; ++i)
    {
        std::cout << message[i];
        // std::cout << *(messagePtr+i);    // same thing
    }
    std::cout << std::endl;

    // std::cin >> inputName;
    // std::cin >> std::setw(20) >> inputName;
    std::cin.getline(inputName, 20);

    std::cout << inputName << std::endl;

    return 0;
}
