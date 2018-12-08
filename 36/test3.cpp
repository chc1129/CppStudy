#include <iostream>
#include <typeinfo>
using namespace std;

class Kitty {};

int main() {
  Kitty obj;

  if (typeid ( Kitty ) == typeid (obj))
    cout << "Kitty on your lap";
  return 0;
}
