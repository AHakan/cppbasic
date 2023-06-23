// Referans ve göstericiler için kullanılır.
// Geri dönüş değeri, başarısız ise NULL dır.
// Genel olarak amacı çalışma zamanında tür belirlenmesidir.

// h1 Animal türünden bir gösterici olduğu için dönüşümde NULL dönüyor

// göstericiler yerine referanslarla işlem yapsaydık bad_cast exception ı
// dönecekti.

#include <iostream>

using namespace std;

class Animal {
public:
  virtual void name() { cout << "Name: Animal" << endl; }
};

class Lion : public Animal {
public:
  virtual void name() { cout << "Name: Lion" << endl; }
};

int main(int argc, char **argv) {

  Animal *h1 = new Animal();
  Animal *h2 = new Lion();
  Animal *h3;

  if ((h3 = dynamic_cast<Lion *>(h1)) == NULL)
    cout << "h1, Lion türüne dönüştürülemez." << endl;

  if ((h3 = dynamic_cast<Lion *>(h2)) == NULL)
    cout << "h2, Lion türüne dönüştürülemez." << endl;

  h3->name();

  return 0;
}

// Ekran çıktısı:
// h1, Lion türüne dönüştürülemez.
// Name: Lion