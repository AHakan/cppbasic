// shared ptr can be shared, passed, returned. 
// shared ptr has a references counter actually shared ptr has two pointer

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


void print(std::shared_ptr<Rectangle> r1)
{
    std::cout << "Area: " << r1->area() << std::endl;
}


int main(int argc, char **argv) 
{
    std::shared_ptr<Rectangle> P1(new Rectangle(3, 8));

    print(P1);   // shared ptr can be passed 

    std::shared_ptr<Rectangle> P2;

    P2 = move(P1); // unıque ptr can be moved

    std::cout << P2->area() << std::endl;

    // we can use shared ptr with containers
    std::vector<std::shared_ptr<Rectangle>> v;

    v.push_back(std::shared_ptr<Rectangle>(new Rectangle(2,13)));

    std::cout << v.begin()->get()->area() << std::endl;

    // array
    std::shared_ptr<float []> floatSize(new float[10]);

    floatSize.get()[0] = 11.23;

    std::cout << "Float array: " << floatSize.get()[0] << std::endl;

    // we can delete it
    floatSize.reset();

    return 0;
}