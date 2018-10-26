#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::less<int> x;
  std::greater<string> y;
  

  //x.operator() ( a, b)
  cout << x(1,10) << endl;;
  cout << y("asdf","xxx") << endl;;


}

