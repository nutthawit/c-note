// Goto
//
// Used to jump between code sections.
#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  if (x < 3) goto cleanup;

  printf("%d\n", x);
  return 0;

cleanup:
  printf("cleanup");
  return 0;
}
