#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void print()
{
  for (int i = 0; i < 30; i++)
  {
    cout << i << " ";
    cout << i+i << " ";
    this_thread::sleep_for(chrono::seconds(1));
  }
}

int main( int argc, char** argv ) {

  thread denemeThread(print);

  for (int i = 0; i < 20 ; i++)
  {
    cout << "Main " << i << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
  }

  denemeThread.join(); //main önce biterse threadin bitmesini bekliyor.

  return 0;

}