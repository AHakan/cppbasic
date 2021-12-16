// C++ pre-C++98: __cplusplus is 1.
// C++98: __cplusplus is 199711L.
// C++11: __cplusplus is 201103L.
// C++14: __cplusplus is 201402L.
// C++17: __cplusplus is 201703L.
// C++20: __cplusplus is 202002L.

#include<iostream>

int main() {
    if (__cplusplus == 202002L) std::cout << "C++20\n";
    else if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else std::cout << "pre-standard C++\n";
}