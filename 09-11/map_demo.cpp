#include <iostream>
#include <vector>
#include <set>
#include <map>

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


    map<Book,bool,BookComp> s = {
      {{"???", "???",120}, false} ,
      {{"DS", "OK", 20}, true} ,
      {{"DS", "Somchai", 20}, false} ,
      {{"???",  "Somchai",30} ,true} };
    cout << s.count(b1) << "," << s.count(b2) << endl;

    for (auto x : s) {
      cout << "---- Book ----- " << endl;
      cout << "name: " << x.first.name << endl;
      cout << "author: " << x.first.author << endl;
      cout << "price: " << x.first.price <<  endl;
      cout << "bool: " << x.second <<  endl;
    
    }
    return 0;
}
