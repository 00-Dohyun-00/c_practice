#include <stdio.h>

void chapter4_02(void) {
  // Pointer in Mamory

  int a = 0x12345678;
  int *ptr;

  ptr = &a;

  // &ptr => 0x2004;
  // &&ptr => x
  // (short *)ptr => 0x1234;
  // *(short *)ptr => 0x1234;

}