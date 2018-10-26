#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
  int data;
  Node *next;
};
int main() {
  Node a,b,c,d;
  Node *pb; pb = &b;
  a.data = 10; b.data = 20; c.data = 30; d.data = 40;
  cout << a.data << endl;
  cout << b.data << endl;
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = NULL;
  cout << pb->next->next->next->next->next->data << endl;
  

}


