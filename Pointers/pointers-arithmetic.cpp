#include <iostream>

int main(int argc, char* argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int * arrPtr = v;
    int * arrPtr = &arr[ 0 ];

    int * arrPtr2 = &arr[3];

    std::cout << arrPtr << "\n";        // print 0x7ffca4137720

    std::cout << arrPtr+2 << "\n";      // print 0x7ffca4137728

    std::cout << *( arrPtr+2 ) << "\n"; // print 3

    std::cout << arrPtr2-arrPtr << "\n";

    // for (size_t i = 0; i < 10; ++i)
    // {
    //     std::cout << arr[i] << "\t";
    // }
    //
    // std::cout << std::endl;

    return 0;
}
