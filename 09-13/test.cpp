#include <iostream>
#include <vector>

using namespace std;

void test(const vector<int>& v) {
  v[0] = 10;
  v.pop_back();
  cout << "size =  " << v.size() << endl;
}

int main() {
  vector<int> v;
  int n = 10000000;
  for (int i= 0;i < n;i++) {
    v.push_back(i);
  }

  int k = 10000;
  for (int j = 0;j < k;j++) {
    cout << j << " ";
    test(v);
  }
}

