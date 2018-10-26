#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;
  int y;

  int *px;
  int *py;
  
  px = &x;
  py = &y;

  x = 20;

  cout << "px = " << px << endl;
  cout <<  "*px = " <<*px << endl;

  cout <<  "py = " <<py << endl;
  cout <<  "*py = " <<*py << endl;

  *py = 30;
  cout <<  "y = " <<y << endl;
  *px = *py;
}

