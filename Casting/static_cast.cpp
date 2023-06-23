// static_cast<tür> operatörü ile değişken dönüşümü yapılır.
// örnek olarak int verilerden yapılan hesaplar ile double veri bulunmak
// istensin burada static_cast operatörü ile açık dönüşüm yapılır. int
// değişkenin türü değişmez ama hesaplama yaparken int değişkenini double olarak
// görür

// static_cast operatörü tüm veri tipleri ile ve sınıf tipleriyle
// kullanılabilir.

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

  int a = 100;
  double b = 2.2;

  double bolum = static_cast<double>(a) / b;
  cout << bolum << endl;

  cout << static_cast<int>('a') << endl; // ASCII

  return 0;
}