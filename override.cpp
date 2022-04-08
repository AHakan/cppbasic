#include <iostream>

struct A
{
    virtual void foo();
    void bar();
    virtual ~A();
};

void A::foo()   { std::cout << "A::foo()\n";}
void A::bar()   { std::cout << "A::bar()\n";}
A::~A()         { std::cout << "A::~A()\n";}

struct B : A
{
    void foo() override;
    // void bar() override; // Error: A::bar is not virtual
    ~B() override;
};

void B::foo()   { std::cout << "B::foo()\n";}
B::~B()         { std::cout << "B::~A()\n";}


int main(int argc, const char** argv)
{
    B b;
    b.foo();
    b.bar();

    return 0;
} 

// Output
// B::foo()
// A::bar()
// B::~A()
// A::~A()
