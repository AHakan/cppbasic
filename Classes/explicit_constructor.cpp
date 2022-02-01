#include <iostream>

class Holder
{
    private:
        int mNum;
    
    public:
        explicit Holder(int num) 
            : mNum(num)
        {}
        
        int getNumber() { return mNum; }
};

void showNumber(Holder h)
{
    int i = h.getNumber();
    
    std::cout << i << std::endl;
}

int main(int argc, const char** argv)
{
    /**
    *   If we can define implicit constructor, we can send 42 directly
    *   But we defined explicit constructor that's why we can not send 42,
    *   Firstly we must init class with constructor after that we call showNumber function.
    *
    *   error: could not convert ‘42’ from ‘int’ to ‘Holder’
    **/
    showNumber(42);

    Holder h = Holder(59);
    showNumber(h);

    return 0;
}