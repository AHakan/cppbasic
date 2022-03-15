#include <iostream>

class Database
{
    friend std::ostream &operator<<(std::ostream &output, const Database &database)
    {
        std::cout << "Index: " << database.index << std::endl;
        
        return output;
    }
    
    private:
        int index = 0;

    public:
        Database &operator++();     // prefix increment operator
        Database &operator++(int);  // postfix increment operator
        Database &operator+=(unsigned int);
};

// prefix
Database &Database::operator++()
{
    index++;
    return *this;
}

//postfix
Database &Database::operator++(int)
{
    index = index + 2;
    return *this;
}


Database &Database::operator+=(unsigned int size)
{
    index = index + size;

    return *this;
}

int main(int argc, char **argv) 
{
    Database db;

    ++db; // index: 2

    db++; // index: 3

    db += 5; // index: 8

    std::cout << db << std::endl; // print 8

    return 0;
}