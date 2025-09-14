// Define the storage duration of an object.

int main() {
  extern int a; // defined elsewhere
  static int b; // hold value between invocations
  register int c; // store in CPU register
  auto int d; // automatic duration. Implicit if not specified
  _Thread_local int e; // thread storage duration
  return 0;
}
