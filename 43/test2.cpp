#include <iostream>
using std:::cout;

class Kitty {
public:
  char *str;
  explicit Kitty(char *str) { this->str = str; }
};

int main() {
  Kitty obj1("Kitty on your lap\n");
  //Kitty obj2 = "Card Captor SAKURA\n";

  cout << obj1.str;
  return 0;
}
