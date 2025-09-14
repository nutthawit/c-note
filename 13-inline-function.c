// inline functions in C are a compiler optimization hint, not a command. Using the inline keyword suggests to the compiler that it should replace a function call with the function's body code directly at the call site. This is called inlining and is intended to reduce the overhead of a function call.
#include <stdio.h>

static inline void square(int* x) {
  *x *= *x;
  return;
}

int main() {
  int num = 5;
  square(&num);
  printf("%d\n", num);
  return 0;

  // output: 25
}
