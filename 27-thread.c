#include <stdio.h>
#include <threads.h>

int thread_func(void* arg) {
  printf("Printing from Thread\n");
  return 0;
}

int main() {
  thrd_t thread_id;
  thrd_create(&thread_id, thread_func, NULL);
  printf("Printing from main\n");
  thrd_join(thread_id, NULL); // wait for thread to return before continuing execution
  return 0;
}
