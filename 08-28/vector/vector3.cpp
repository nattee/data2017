#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;

int main() {
  std::vector<int> vs1;
  int n = 5;

  for (int i = 0;i < n;i++) {
    vs1.push_back(i);
  }
  vs1.pop_back();

  vs1.insert(vs1.begin(), 100);
  vs1.insert(vs1.begin()+3, 200);
  vs1.insert(vs1.end()  ,300);
  
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ": " << vs1[i] << endl;
  }

  vector<int>::iterator it = vs1.begin();
  auto it2 = it;
  it2 = it + 10;
  it++;

  return 0;
  cout << "find...." << endl;

  //std::vector<int>::iterator it = find(vs1.begin(),vs1.end(),3);
  std::vector<int>::iterator it = find(vs1.begin()+2,vs1.begin()+4,2);

  //find(a,b,c) is....
//  for (auto it = a; it != b;it++) {
//    if (*it == c)
//      return it;
//  }
//  return b;

  if (it == vs1.end() ) {
    cout << "not found " << endl;
  } else { 
    cout << "found at index " << (it - vs1.begin()) << endl;
    vs1.insert(it,60000);
  }
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ": " << vs1[i] << endl;
  }


}

