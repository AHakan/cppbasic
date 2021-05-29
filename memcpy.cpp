// void* memcpy(void *dest, const void *src, size_t n)
// src parametresi ile belirtilen bellek bölgesindeki karekterleri
// n parametre değeri kadar uzunlukta
// dest parametresi ile belirtilen bellek bölgesine kopyalar

#include <iostream>
#include <cstring>

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
    struct aType * c;

    b->number1 = 5;
    b->bTypeDefinition.number2 = 8;

    memcpy(&c, &b, sizeof(struct aType));

    cout << "c: " << c->bTypeDefinition.number2 << endl;

    return 0;
}