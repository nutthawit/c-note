/*
`#include`

This is the most common preprocessor directive. It tells the preprocessor to insert the entire content of a specified file into the current file at the point of the directive.

- #include <filename>: Used for standard library headers. The preprocessor searches in a predefined list of directories (e.g., /usr/include).

- #include "filename": Used for user-defined headers. The preprocessor first searches in the same directory as the source file.
*/
#include <stdio.h>

/*
`#define`

Allows you yo create `macros`, which are simple text replacements, Macros can be either object-like (for constants) or function-like.
*/

// - object-like:
#define PI 3.14159
#define MAX_SIZE 100

// - function-like: Act like functions but are expanded by the preprocessor, avoiding the overhead of a function call.
#define ADD(a, b) ((a) + (b))
// The parentheses around the arguments and the entire expression are important to prevent unexpected behavior due to operator precedence.

/*
#if, #ifdef, #ifndef

This allows you to include or exclude parts of your code based on certain conditions. This is useful for writing portable code that can be compiled on different platforms or for including debug-only code.
*/

#ifndef MY_HEADER_H
#define MY_HEADER_H
// header file contents
#endif

/*
#if, #elif, #else

Allow you to test more complex integer-based conditions.
*/
#if defined(__linux__)
#include <unistd.h>
#elif defined(_WIN32)
#include <windows.h>
#else
#err "Unsupported OS!"
#endif





