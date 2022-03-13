// unique_ptr small, fast, can not be shared, can be moved

#include <iostream>
#include <memory>
#include <vector>

class Rectangle 
{
    int length;
    int breadth;

    public:
        Rectangle(int l, int b) 
        {
        length = l;
        breadth = b;
        }

        int area() { return length * breadth; }
};


void print(std::unique_ptr<Rectangle> r1)
{
    std::cout << "Area: " << r1->area() << std::endl;
}


int main(int argc, char **argv) 
{
    std::unique_ptr<Rectangle> P1(new Rectangle(5, 10));

    // print(P1);   // unique ptr can not be passed 

    std::unique_ptr<Rectangle> P2;

    P2 = move(P1); // unıque ptr can be moved

    std::cout << P2->area() << std::endl;

    // we can use unique ptr with containers
    std::vector<std::unique_ptr<Rectangle>> v;

    v.push_back(std::unique_ptr<Rectangle>(new Rectangle(2,4)));

    std::cout << v.begin()->get()->area() << std::endl;

    return 0;
}