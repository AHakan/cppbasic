#include <iostream>

using namespace std;

class Base
{
    public:
    void add(int num1, int num2);
    void add(float num1, float num2, float num3);
};

void Base::add(int num1, int num2)
{
    cout << num1+num2 << endl;
}

void Base::add(float num1, float num2, float num3)
{
    cout << num1+num2+num3 << endl;
}

int main(int argc, const char** argv)
{
    Base a;

    a.add(4, 4);

    a.add(4.1, 4.2, 4.3);

    return 0;
}