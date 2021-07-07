// constexpr derleme esnasında(compile-time) sonucu belli olan, sabit değer
// döndüren bir fonksiyon, hatta ifadelerin tanımlanması için kullanılır.

#include <iostream>
#include <string>

constexpr int square(int num) { return num * num; }

int main() {
  const int a = 5;
  int b = square(a);
  std::cout << a << ", " << b << std::endl;

  return 0;
}
