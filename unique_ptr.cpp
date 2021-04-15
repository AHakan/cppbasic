// Tek sahipli smart pointer
// Kapsam dışına çıkınca yok olur.
// Kopyalanamaz ama transfer edilebilir.

#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
  int length;
  int breadth;

public:
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }

  int area() { return length * breadth; }
};

int main(int argc, char **argv) {
  unique_ptr<Rectangle> P1(new Rectangle(5, 10));

  cout << P1->area() << endl;

  unique_ptr<Rectangle> P2;

  P2 = move(P1); // P1 i P2 ye transfer ediyoruz

  cout << P2->area() << endl;

  return 0;
}