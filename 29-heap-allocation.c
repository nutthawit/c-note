#include <stdlib.h>

int main() {
  // malloc(sizeof(int)) is allocated integer size on Heap, and then cast to int pointer by (int*)
  int* x = (int*)malloc(sizeof(int));
  if (x) { // test that hte memory was allocated before you use it
    free(x); // you must manually free any memory you allocated on the heap.
  }

  return 0;
}
