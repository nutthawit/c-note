
/* Variadic functions are functions that can take a variable number of arguments. They are a feature of the C language that allows a single function to be called with a different number of parameters each time it's invoked. The most common example is the printf function, which can be called with just a format string, or with the format string plus any number of additional arguments.

How They Work

To create a variadic function, you use an ellipsis (...) in the function's parameter list to signify that it accepts a variable number of arguments. At least one fixed parameter must be provided before the ellipsis. This fixed parameter is necessary for the function to know where the variable arguments begin.

The C standard library provides a set of macros in the <stdarg.h> header file to handle the variable arguments:

- va_list: A special type used to declare a variable that will point to each argument in the list.

- va_start: A macro that initializes the va_list variable. It takes the va_list variable and the name of the last fixed parameter.

- va_arg: A macro that retrieves the next argument from the list. It takes the va_list variable and the data type of the argument you are expecting.

- va_end: A macro that cleans up the va_list variable. It should be called after all arguments have been processed. */

#include <stdio.h>
#include <stdarg.h>

// `count` is the fixed parameter.
int sum(int count, ...)
{
  int total, i, temp;
  total = 0;
  va_list args;

  // Initialize the va_list with the last fixed argument.
  //
  // va_start requires the name of the last fixed parameter because it uses this parameter's memory address to locate the beginning of the variable argument list on the call stack.
  //
  // In C, function arguments are typically pushed onto the stack in a specific order. By knowing the address of the last named parameter, va_start can calculate the memory offset to find the first argument in the ... portion of the function call. This is crucial for initializing the va_list and allowing the va_arg macro to correctly iterate through the subsequent arguments.
  va_start(args, count);

  for(int i = 0; i < count; i++) {
    temp = va_arg(args, int);
      total += temp;
  }
  va_end(args);
  return total;
}

int main() {
  int numbers[4] = {5,10,15,20};
  int sum_of_numbers = sum(3, numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("Sum of the array: %d\n", sum_of_numbers);
  return 0;

  // output: 30
}
