#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;
  x = 20;
  cout << x << endl;

  string s;
  s = "somchai";
  cout << s << endl;

  pair<int,string> p;
  cout << "p.first is " << p.first << endl;
  cout << "p.second is " << p.second << endl;

  p.first = 60;
  p.second = "yyy";

  cout << "-------------------------" << endl;
  cout << "p.first is " << p.first << endl;
  cout << "p.second is " << p.second << endl;

  pair< pair<int,string>, pair<string,float> > p2;
  pair< pair<int, pair<string,string>,float>> p3;
}

