// Fonksiyon virtual tanımlanmasa ekrana Sekil sınıfının fonksiyonunu yazardı.
// Fonksiyon virtual olduğu için türeyen sınıfın fonksiyonu kullanılır.

#include <iostream>

using namespace std;

class Sekil {
public:
  virtual void PrintType() const;
};

void Sekil::PrintType() const { cout << "Ekrana şekil basar." << endl; }

class Kare : public Sekil {
public:
  virtual void PrintType() const;
};

void Kare::PrintType() const { cout << "Ekrana kare basar." << endl; }

int main(int argc, char **argv) {

  Sekil *sekil1 = new Kare();

  sekil1->PrintType();

  return 0;
}