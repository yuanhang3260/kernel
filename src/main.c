// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials

#include "multiboot.h"

int x = 5;
long long y = 3;

int foo(int a, int b) {
  return a + b;
}

int main(struct multiboot *mboot_ptr) {
  int c = foo(1, 2);
  int d = foo(3, 5);

  // All our initialisation calls will go in here.
  return (int)mboot_ptr + c + d;
}