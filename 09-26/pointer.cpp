#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x,y,z;

  int *p1,*p2,*p3;

  p1 = &x;
  p2 = &y;
  p3 = &z;


  cout << p1 << endl;
  cout << p2 << endl;
  cout << p3 << endl;
  cout << p3 - p1 << endl;
}

