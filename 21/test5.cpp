#include <iostream>
using namespace std;

class Base {
  char *str;
public:
  char *getStr() { return str; }
  char **getPo() { return &str; }
};

class Derived : protected Base {
public:
  void setStr(char *str) {
    char **po = getPo();
    *po = str;
  }
  void printSTr() { cout << getStr(); }
} obj;

int main() {
  obj.setStr("Kitty no your lap");
  obj.printStr(); // cout << obj.getStr(); これはエラーになる
  return 0;
}
