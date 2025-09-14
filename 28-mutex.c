#include <stdio.h>
#include <threads.h>

typedef struct data {
  mtx_t mtx;
  int x;
} data;

// void* arg is a generic pointer that can hold the address of any data type.
int thread_func(void* arg) {
  data* d = (data*)arg;
  mtx_lock(&d->mtx);
  d->x = 2;
  mtx_unlock(&d->mtx);
  return 0;
}

int main() {
  data d;

  /* The mtx_init function is used to initialize a mutex object. A mutex (short for "mutual exclusion") is a synchronization primitive used in multi-threaded programming to protect a shared resource from being accessed by more than one thread at the same time.

  In C, mtx_init is part of the threads.h header file, which was introduced in the C11 standard. It takes two arguments:

  1. A pointer to the mtx_t object you want to initialize.

  2. An integer flag that specifies the type of mutex you want to create.
  The second argument, type, is crucial because it defines the behavior of the mutex. The most common types are:

  - mtx_plain: Creates a simple, non-recursive mutex. This is the most basic and common type.

  - mtx_timed: Creates a non-recursive mutex that supports a timeout, meaning a thread can try to acquire the lock for a specific amount of time before giving up.

  - mtx_plain | mtx_recursive: Creates a recursive mutex. A recursive mutex can be locked multiple times by the same thread without causing a deadlock. This can be useful in functions that call other functions that also need to acquire the same lock. */
  mtx_init(&d.mtx, mtx_plain);


  /*The thrd_create function takes three main arguments:

    A pointer to a thrd_t object: This is where the function will store the ID of the newly created thread. You use this ID later to manage the thread, for example, to wait for it to finish using thrd_join.

    A function pointer: This is the thread function—the code that the new thread will execute. This function must have a specific signature: it must take a single void* argument and return an int.

    A void* argument: This is a generic pointer to any data you want to pass to the thread function. This is a common and flexible way to provide the thread with the context or data it needs to perform its task. */
  thrd_t thread_id;
  thrd_create(&thread_id, thread_func, (void*)&d);

  printf("x before thrd_create %d\n", d.x); // output: 0
  thrd_join(thread_id, NULL);
  printf("x after thrd_create %d\n", d.x); // output: 2

  return 0;
}
