// ref: https://stackoverflow.com/a/840504
//
#include<stdio.h>

int addInt(int n, int m) {
  return n+m;
}

int add2to3(int (*fnPtr)(int, int)) {
  return (*fnPtr)(2, 3);
}

int main() {
  // Define `fnPtr` is a function pointer which receives 2 int and return an int.
  int (*fnPtr)(int, int);

  // Make
  fnPtr = &addInt;

  int sum1 = (*fnPtr)(2, 3);
  int sum2 = add2to3(fnPtr);

  printf("%d\n", sum1 + sum2);

  return 0;
}
