// Basit multithread kullanımı

#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mutex_kilit;

int a = 0;

void foo() {
  while (true) {
    mutex_kilit.lock();

    if (a == 1) {
      a = 0;
    } else {
      a = 1;
    }
    this_thread::sleep_for(500ms);
    mutex_kilit.unlock();
  }
}

class thread_obj {
public:
  void operator()(int x) {
    while (true) {
      if (a == 1) {
        cout << "X eşittir: " << x << endl;

      } else {
        cout << "X = 0" << endl;
      }
      this_thread::sleep_for(500ms);
    }
  }
};

int main() {

  thread th1(foo);

  thread th2(thread_obj(), 100);

  th1.join();

  th2.join();

  return 0;
}