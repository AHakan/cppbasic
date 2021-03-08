// const tanımlı değişken, fonksiyon ya da pointerlar sadece atanan değeri
// gösterirler ve değiştirelemezler. cost tanımlı değişkenlerde değişiklik
// yapılacak olursa derleyicinin hata verdiğini görebiliriz. const_cast
// operatörü ise const tanımlı pointerlarda const tanımını kaldırır ve
// değişiklik yapılmasına izin verir.

#include <iostream>

using namespace std;

void func(const char *data) {
  char *p = const_cast<char *>(
      data); // const_cast operatörünü kullanmasaydık derleyici hata verecekti.

  p[0] = 97;
}

int main(int argc, char **argv) {

  char a[1000];

  func(a);

  cout << a[0] << endl;

  return 0;
}