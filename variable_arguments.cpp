#include <iostream>

using namespace std;

#define test    LOG_WRITE

template<typename... Args> void test(const char * f, Args... args) {
  printf(f, args...);
}

int main()
{
  int a = 2;
  LOG_WRITE("%s\n", "test");
  LOG_WRITE("%s %d %d %p\n", "second test", 2, a, &a);
}


