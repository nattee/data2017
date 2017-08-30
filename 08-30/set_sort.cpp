#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  
  vector<int> s;

  s.push_back(10);
  s.push_back(2);
  s.push_back(-3);
  s.push_back(7);
  s.push_back(4);
  s.push_back(8);

  //sort element of s
  //  we can easily use sort(s.begin(), s.end())
  //  but please do not use that
  //  Instead, you must use a set<int> to sort the data
  //  by putting all data in s into a set and iterate
  //  every member in the set and put them back into the vector

  for (auto it = s.begin();it != s.end();it++) {
    cout << *it << endl;
  }
}

