// Bir nesnenin sahip oldugu verileri baska bir nesneye
// kopyalamak icin copy constructor kullanilir. 

#include <iostream>

class A
{
    private:
        int size;
        int num;

    public:
        A(int s, int n) : size(s), num(n) {} // constructor
        A(const A & a) : size(a.size), num(a.num) {} // copy constructor
        
        void print() { std::cout << size << "-" << num << std::endl; }
};


int main(int argc, char **argv) 
{
    A x(10, 5);
    
    A y(x);

    x.print();

    y.print();

    return 0;
}