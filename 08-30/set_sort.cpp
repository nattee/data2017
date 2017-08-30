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


  // step 1, put everything in the vector into a aset
  set<int> p;
  for (size_t i = 0;i < s.size();i++) {
    p.insert(s[i]);
  }
//  for (auto it = s.begin();it != s.end();it++) {
//    p.insert(*it);
//  }
//  p.insert(s.begin(),s.end());

  size_t tmp = s.size();
  for (size_t i = 0;i < tmp;i++) {
    s.erase(s.end()-1);
  }
  //s.clear();

  for (auto it = p.begin(); it != p.end();it++) {
    s.push_back(*it);
  }


  for (auto it = s.begin();it != s.end();it++) {
    cout << *it << endl;
  }
}

