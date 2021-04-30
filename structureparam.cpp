// Fonksiyona referance ile struct göndermek

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

class aClass
{
    public:
        uint8_t a;
        uint8_t b;

        aClass(aType *aParam)
        {
            a = aParam->number1;
            b = aParam->bTypeDefinition.number2;

            cout << "a: " << unsigned(a) << endl;
            cout << "b: " << unsigned(b) << endl;

            aParam->bTypeDefinition.number2 = 4;

        }
};

int main(int argc, char **argv) {

    struct aType a;
    struct aType * b = &a;

    b->number1 = 5;
    b->bTypeDefinition.number2 = 8;

    aClass aObj(b);

    cout << "Yeni b: " << b->bTypeDefinition.number2 << endl;

    return 0;
}