// A way of expressing additional information about a value through the type system to ensure correctness in the use of the data.
//
int main() {
  // It's used on a pointer to tell the compiler that the memory location pointed to
  // by this pointer will not be accessed by any other pointer within the scope of the function.
  restrict int* a;
  const int b; // Once defined, is constant and connot be changed
  atomic int c; // Can only be modified by one thread at a time
  volatile int d; // Can be modified externally. the program will check x's value before using it, even if it hasn't been modified locally.
  return 0;
}
