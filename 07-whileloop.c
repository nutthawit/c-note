#include <stdio.h>

int main() {
  int x = 1;
  while(x <= 3) {
    printf("%d\n", x++);
  }
  return 0;

  // output:
  // 1
  // 2
  // 3
}
