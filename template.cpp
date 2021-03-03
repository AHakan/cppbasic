#include <cstdio>
#include <iostream>

using namespace std;


// Farklı veri türüne sahip benzer fonksiyonları ya da benzer sınıfları oluşturmak için kullanılır.
// Şablon oluşturarak kod kalabalıklığını ortadan kaldırır.

// Fonksiyon şeklinde tanım
template <class T>
T topla(T deger1, T deger2) {
    return deger1 + deger2;
}

// Class şeklinde tanım
template <class C>
class Sayi {
    public:
        C sayi1, sayi2;
        Sayi(C d1, C d2) {
            this->sayi1 = d1;
            (*this).sayi2 = d2;
        }
        C topla();
};

template <class C>
C Sayi<C>::topla() {
    return this->sayi1 + this->sayi2;
}


int main( int argc, char** argv ) {

    int sayi1 = 20, sayi2 = 30;
    float sayi3 = 10.3, sayi4 = 2.3;    // Float noktadan sonra 7 basamak
    double sayi5 = 22.2, sayi6 = 2.4;   // Double noktadan sonra 15 basamak

    cout << "Int toplam: " << topla(sayi1, sayi2) << endl;
    cout << "Float toplam: " << topla(sayi3, sayi4) << endl;
    cout << "Double toplam: " << topla(sayi5, sayi6) << endl;

    Sayi<int> intSayi(10,14);
    Sayi<double> doubleSayi(10.2, 30.1);

    cout << "Int class: " << intSayi.topla() << endl;
    cout << "Double class: " << doubleSayi.topla() << endl;

    return 0;
}