#include <iostream>
#include <vector>

using namespace std;

int main() {
  char tmp[] = "ABCDEF";
  cout << tmp;
  int x;
  cin >> x;
  //this is a static array.
  //Once it is created, it size does not change
  int a[x];

  for (int i = 0;i < x;i++) {
    a[i] = i*2;
  }

  for (int i = 0;i < x;i++) {
    cout << i << ": " << a[i] << endl;
  }
  cout << "wait...";
  cin >> x;
}

