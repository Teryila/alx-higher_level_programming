# Singly Linked List Cycle Detection

[2;2R[3;1R[>77;30603;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000This project contains C code that implements a function to detect cycles in a singly linked list. The function `check_cycle` takes the head of a linked list as input and returns 1 if the list contains a cycle and 0 otherwise.

## Usage

To use the `check_cycle` function in your C program, include the `lists.h` header file in your source code and link the provided implementation file `10-check_cycle.c` with your program.

## Requirements

- C compiler
- Standard C libraries
- Functions allowed: `write`, `printf`, `putchar`, `puts`, `malloc`, `free`

## Files

- `lists.h`: Header file containing the struct definition and function prototypes.
- `10-check_cycle.c`: Implementation of the `check_cycle` function.
- `10-linked_lists.c`: Implementation of helper functions for linked lists (provided).
- `10-main.c`: Main program to test the `check_cycle` function (provided).

## Testing

To compile and test the code, run the following commands:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 10-main.c 10-check_cycle.c 10-linked_lists.c -o cycle
./cycle

