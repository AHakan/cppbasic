// Virtual destructor           // Destructor

// Base constructor             // Base constructor
// Derived constructor          // Derived constructor
// Derived destructor           // Base destructor
// Base destructor

#include <iostream>

using namespace std;

class base
{
    public:

    base()
    { cout << "Base constructor" << endl; }

    // ~base()
    // { cout << "Base destructor" << endl; }

    virtual ~base()
    { cout << "Base virtual destructor" << endl; }
};

class derived: public base
{
    public:

    derived()
    { cout << "Derived constructor" << endl; }

    ~derived()
    { cout << "Derived destructor" << endl; }
};

int main(int argc, const char** argv) {

    derived *d = new derived();

    base *b = d;

    delete b;

    return 0;
}
