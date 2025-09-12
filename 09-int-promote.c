#include <stdio.h>

int main() {
  char x = 'A';

  // x is promoted to int to compare it with the integer value of 'a'
  if (x < 'a') printf("Less than\n");

  else printf("Greater than or equal to\n");

  return 0;

  // output: Less than
}
