#include "multiboot.h"
#include "monitor.h"

int x = 5;
long long y = 3;

int foo(int a, int b) {
  return a + b;
}

extern u32int end;
u32int placement_address = (u32int)&end;

int main(struct multiboot *mboot_ptr) {
  monitor_clear();
  monitor_write("placement_address:");
  monitor_write_hex(placement_address);
  monitor_write("\n");

  monitor_write("mboot_ptr:");
  monitor_write_hex((u32int)mboot_ptr);

  int c = foo(1, 2);

  // All our initialisation calls will go in here.
  return 0x12345678;
}
