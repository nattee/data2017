#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1 = {10,20,30,40,50,60};

  //reverse
  vector<int> v2;
  auto it = v1.end()-1;
  for (size_t i = 0;i < v1.size();i++) {
    v2.push_back(*it);

    it--;
  }
  v1 = v2;
}

