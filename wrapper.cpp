// A simple way to wrap to struct with mutex.

#include <mutex>
#include <vector>
#include <memory>
#include <iostream>
#include <functional>

struct foo 
{
   int a;
   std::mutex b;
};


int main () 
{
   std::vector<std::unique_ptr<foo>> bar;

   std::unique_ptr<foo> p(new foo());
   p->b.lock();
   p->a = 1;
   p->b.unlock();
   bar.emplace_back(std::move(p));

   std::unique_ptr<foo> p2(new foo());
   p2->b.lock();
   p2->a = 2;
   p2->b.unlock();
   bar.emplace_back(std::move(p2));

   for (auto it = bar.begin(); it != bar.end(); ++it) 
   {
      (*it)->b.lock();
      std::cout << (*it)->a << std::endl;
      (*it)->b.unlock();
   }

   return 0;
}