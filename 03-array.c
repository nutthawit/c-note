#include <stdio.h>

int main() {
  int array_a[5];

  // You can init the array from it's elements. Size can be auto detected.
  int array_b[] = {0,1,2,3,4};

  size_t len = sizeof(array_a) / sizeof(array_a[0]);
  for (size_t i = 0; i < len; i++) {
    array_a[i] = i;
  }

  printf("%d\n", array_a[2]);

  return 0;

  // output: 2
}
