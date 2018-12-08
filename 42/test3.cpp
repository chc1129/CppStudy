#include <iostream>
using std::cout;

class Kitty {
public:
  mutable char *str;
  void print() const {
    str = "Chobis";
    cout << str;
  }
  Kitty(char *str) { this->str = str; }
};

int main() {
  Kitty obj("Kitty on yur lap\n");
  obj.print();
  return 0;
}
