#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v(10);

  for (int i = 0;i < 10;i++) v[i] = i;


  for (auto &x : v) cout << x << " ";
  cout << endl << v.size() << endl;
  cout << endl;

  v.resize(15);
  for (auto &x : v) cout << x << " ";
  cout << endl << v.size() << endl;
  cout << endl;

  v.resize(7);
  for (auto &x : v) cout << x << " ";
  cout << endl << v.size() << endl;
  cout << endl;

  v.resize(10);
  for (auto &x : v) cout << x << " ";
  cout << endl << v.size() << endl;
  cout << endl;

  v[20] = 99;
  for (int i = 0;i < 20;i++) {
    cout << v.at(i) << ",";
  }
  cout << endl;
}

