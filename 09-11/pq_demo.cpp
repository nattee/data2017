#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

class Book {
public:
    string name;
    string author;
    double price;

    bool operator<( const Book& b) const {
      if (name < b.name) return true;
      if (name == b.name)
        return author < b.author;
      return false;
         // return price > b.price;
    }
};


class BookComp {
public:
    bool operator()(const Book& b1, const Book& b2) const {
        return b1.price < b2.price;
    }
};
int main() {
    Book b1 = {"Cal", "???",120};
    Book b2 = {"DS", "OK", 30};

    if ( b1 < b2 ) {
      cout << "HAhaha" << endl;
    } else {
      cout << "NO hahaha" << endl;
    }


    priority_queue<Book,vector<Book>,BookComp> s;
    s.push( {"???", "???",120});
    s.push(  {"DS", "OK", 20});
    s.push( {"DS", "Somchai", 20});
    s.push( {"???",  "Somchai",30});
    //cout << s.count(b1) << "," << s.count(b2) << endl;

    while (!s.empty()) {
      auto x = s.top(); s.pop();
      cout << "---- Book ----- " << endl;
      cout << "name: " << x.name << endl;
      cout << "author: " << x.author << endl;
      cout << "price: " << x.price <<  endl;
    }
    return 0;
}
