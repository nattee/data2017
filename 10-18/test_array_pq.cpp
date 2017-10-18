#include <iostream>
#include <vector>

using namespace std;
//write your class here 
//the class should be named "ArrayPQ"

int main() {

  ArrayPQ<int> p;
  p.push(1);
  p.push(10);
  p.push(5);
  p.push(3);

  while (p.empty() != false) {
    cout << "Size = " << p.size() << " top = " << p.top() << endl;
    p.pop();
  }
}

