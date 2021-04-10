// Bağlı liste ( Linked List ) örneği

#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;
};

int main(int argc, char **argv) {

  Node *head = NULL;
  Node *second = NULL;
  Node *third = NULL;

  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  cout << head->next->data << endl; // print 2

  // unsigned int ekrana basar.
  // cout << +a.data << endl;
  // cout << unsigned(a.data) << endl;

  return 0;
}