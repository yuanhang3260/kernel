// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials

int x = 5;
long long y = 3;

int main(struct multiboot *mboot_ptr) {
  // All our initialisation calls will go in here.
  return 0xDEADBABA;
}