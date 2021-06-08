// sprintf() fonksiyonu, string (dizgi) içerisine yazdırmak için kullanılır ve ilk karakteri de buradan gelmektedir. Bu fonksiyonun en önemli özelliği, bastırdığı değerlerin sonuna dizgi sonu (end of string) anlamnda ‘’ karakteri koymasıdır.

// snprintf() fonksiyonu ise, sprintf() fonksiyonu ile tamamen aynı çalışmakta olup, tek farkı ilave bir sayı alıyor olmasıdır. Bu sayede kaç karakterin basılacağı fonksiyon çağırılırken belirtilebilir.

#include <cstdio>
#include <iostream>

using namespace std;

#define MAX_BUFFER_SIZE 32768

int main()
{
    char buffer[MAX_BUFFER_SIZE];
    int retVal;
    char name[] = "Max";
    int age = 23;

    retVal = snprintf(buffer, MAX_BUFFER_SIZE, "Hi, I am %s and I am %d years old.", name, age);
    if (retVal > 0 && retVal < MAX_BUFFER_SIZE)
    {
        cout << buffer << endl;
        cout << "Number of characters written = " << retVal << endl;
    }
    else
        cout << "Error writing to buffer" << endl;

    return 0;
}

