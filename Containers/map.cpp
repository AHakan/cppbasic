#include <iostream>
#include <iterator>
#include <map>

int main(int argc, const char** argv)
{
    std::map<uint8_t, uint8_t> myMap;

    myMap.emplace(1,40);
    myMap.insert(std::pair<uint8_t, uint8_t>(2,50));
    myMap.insert(std::pair<uint8_t, uint8_t>(3,60));
    myMap.insert(std::pair<uint8_t, uint8_t>(4,70));

    std::map<uint8_t, uint8_t>::iterator itr;

    for(itr=myMap.begin(); itr != myMap.end(); ++itr)
    {
        std::cout << "\t" << unsigned(itr->first)
                  << "\t" << unsigned(itr->second) << "\n" ;
    }

    myMap.erase(3);

    for(itr=myMap.begin(); itr != myMap.end(); ++itr)
    {
        std::cout << "\t" << unsigned(itr->first)
                  << "\t" << unsigned(itr->second) << "\n" ;
    }

    std::cout << std::endl;

    return 0;
}