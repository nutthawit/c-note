#include <stdio.h>

int main() {
  int x[5];
  int* x_ptr = &x[0];
  printf("value of x_ptr = %p\n", (void*)x_ptr);
  printf("value of x_ptr + 1 = %p\n", (void*)(x_ptr + 1)); // 4 bytes far
  /* (void*) is a type cast that tells the compiler to treat a pointer as a generic pointer. It's commonly used to avoid compiler warnings when a function expects a void* but you're passing a pointer of a different type, such as an int* or char*.

  You should not omit it in your example because the printf function's %p format specifier requires an argument of type void* according to the C standard. This is because %p is used for printing the value of any generic pointer, and casting to void* makes the pointer type explicit and consistent with the format specifier. Omitting the cast would lead to a compiler warning, as a long (the usual type used for printing addresses) might not be the same size as the pointer on all architectures, which can lead to undefined behavior. */

  char y[5];
  char* y_ptr = &y[0];
  printf("value of y_ptr = %p\n", (void*)y_ptr);
  printf("value of y_ptr + 1 = %p\n", (void*)(y_ptr + 1)); // 1 byte far
  return 0;

  // output:
  // value of x_ptr = 0x7ffe74eeef50
  // value of x_ptr + 1 = 0x7ffe74eeef54
  // value of y_ptr = 0x7ffe74eeef43
  // value of y_ptr + 1 = 0x7ffe74eeef44
}
