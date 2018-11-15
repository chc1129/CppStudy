#include <stdio.h>

int func() {
  puts("Kitty on your lap");
  return;   /*警告がでる可能性があるが,コンパイル可能*/
}

int main() {
  func();
  return 0;
}
