int main() {
  struct Point {
      int x;
      int y;
  };

  // Create a Point variable
  struct Point origin = {10, 20};

  // Create a pointer to the Point variable
  struct Point *p = &origin;

  // Deference the pointer `(*p)` and access the member `.x`
  // p->x	is equal to (*p).x
  int val_x = p->x; // Accesses the 'x' member

  return 0;
}
