// Memory Layout: Struct members are stored in a contiguous block of memory. However, due to memory alignment requirements, the compiler may add padding (empty bytes) between members, which can make the size of the struct larger than the sum of its members' individual sizes. You can check the size of a struct using the sizeof operator.
//
// Similar to Classes: In languages like C++, structs are very similar to classes but with one key difference: struct members are public by default, while class members are private by default. In C, structs are a simpler data container and don't have methods or constructors like classes.
#include <stdio.h>

struct my_struct {
  int x;
  int y;
};

int main() {
  struct my_struct obj1;
  obj1.x = 1;
  printf("%d\n", obj1.x);
  return 0;

  // outout: 1
}
