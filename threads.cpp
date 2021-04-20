// Basit multithread kullanımı

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int a = 0;

void foo()
{
    while( true )
    {
        if( a == 1 )
        {
            a = 0;
        }
        a = 1;
    }
    this_thread::sleep_for(500ms);
}

class thread_obj {
public:
    void operator()(int x)
    {
        while( true )
        {
            if( a==1 )
            {
                cout << "X eşittir: " << x << endl;

            }
            else
            {
                cout << "X = 0" << endl;
            }
            this_thread::sleep_for(500ms);
        }
    }
};

int main()
{

    thread th1(foo);

    thread th2(thread_obj(), 100);

    th1.join();

    th2.join();

    return 0;
}