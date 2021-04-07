#include <iostream>

using namespace std;

struct aType
{
    int number1;

    struct bType
    {
        int number2;
    } bTypeDefinition;
};

int main(int argc, char **argv) {

    struct aType a;
    struct aType * b = &a;

    b->number1 = 5;
    b->bTypeDefinition.number2 = 8;

    cout << "Atype struct number1 = " << b->number1 << endl;
    cout << "btype struct number2 = " << b->bTypeDefinition.number2 << endl;

    return 0;
}