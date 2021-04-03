// Tür bağımsız verileri saklayan yapılardır.
// stack, list, vector, array gibi

// vector bunlardan en çok kullanılanlardan bir tanesidir.
// performans olarak iyidir.

// vector ve deque farkı olarak deque ye baştan da veri eklenebilir.

#include <iostream>
#include <array>
#include <vector>
#include <deque>

using namespace std;

int main(int argc, char **argv) {


    // Array
    array<int, 3> nums = { 5, 10, 15};
    for(auto i: nums)
    {
        cout << i << endl;
    }


    // Vector
    vector<string> names;
    names.push_back("Ali");
    names.push_back("Veli");
    names.push_back("Can");

    cout << names.capacity() << endl;   // vektörün şu anda kullandığı alan miktarıdır.
    cout << names.size() << endl;       // vektörün eleman sayısıdır.

    for(auto i: names){
        cout << i << endl;
    }


    // Deque
    deque<string> dequeNames;
    dequeNames.push_back("Ali");
    dequeNames.push_back("Veli");

    return 0;
}