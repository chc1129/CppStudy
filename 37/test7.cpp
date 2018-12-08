#include <iostream>
using namespace std;

int main() {
  char *str = "A";
  int var = reinterpret_cast < int > (str);

  cout << var;

  return 0;
}
