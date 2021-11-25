#include <functional>
#include <iostream>
#include <set>
#include <iterator>

int main(int argc, const char **argv)
{
    // defining the set.
    std::set<int> s;

    // store the elements in decreasing sorted order.
    // std::set<int, std::greater<int>> s;

    // insterting random elements.
    s.insert(50);
    s.insert(30);
    s.insert(45);
    s.insert(55);
    s.insert(10);
    s.insert(25);

    // initialising the iterator, iterating to the beginning of the set.
    std::set<int>::iterator it;

    for( it = s.begin(); it != s.end(); it++ )
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "The size of set: " << s.size() << std::endl;

    return 0;
}