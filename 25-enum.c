// default value: if you don't explicitly assign values, the first name is 0, and subsequent name are incremented by one.
//
// explicit value: you can override the default values. the value of subsequent members will then continue from the new value
// enum Status {
//   SUCCESS = 1,
//   ERROR = -1,
//   PENDING,  // PENDING = 0
// };
#include <stdio.h>

enum week {
  mon,
  tue,
  wed,
  thu,
  fri,
  sat,
  sun,
};

int main() {
  for(int i = mon; i <= sun; i++) {
    printf("%d\n", i);
  }
  return 0;
  // output
  // 0
  // 1
  // 2
  // 3
  // 4
  // 5
  // 6
}
