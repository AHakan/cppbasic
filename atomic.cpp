// atomic değişken, okunma veya yazma işlemi bitmeden serbest bırakılmaz.
// race condition'ı engeller.

#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

std::atomic<bool> flag;
std::atomic<int> i;

void add()
{
    flag = true;

    while (1)
    {
        if (flag == true)
        {
            i++;
            flag = false;

            
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
            std::cout << "add" << "\t" << "i: " << i << "\t" << "is lock free: " << flag.is_lock_free() << std::endl;

            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }
    }
}

void sub()
{
    while (1)
    {
        if (flag == false)
        {
            i--;
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            std::cout << "sub" << "\t" << "i: " << i << "\t" << "is lock free: " << flag.is_lock_free() << std::endl;

            std::this_thread::sleep_for(std::chrono::milliseconds(2000));

            flag = true;
        }
    }
}

int main(int argc, const char** argv)
{

    std::thread mThread1(add);

    std::thread mThread2(sub);


    mThread1.join();
    mThread2.join();
    
    return 0;
}