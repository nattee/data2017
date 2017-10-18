#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v(10,-1);

  for (auto it = v.begin(); it != v.end();it++) {
    v.insert(it,2);
  }
}

