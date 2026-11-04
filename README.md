*This project has been created as part of the 42 curriculum by abaninas*

# ft_printf

## Description

The `ft_printf` project is part of the 42 curriculum. The goal is to recreate the behavior of the standard C `printf()` function by implementing a custom function called `ft_printf()`.

The function uses a format string to display different types of data, including characters, strings, integers, unsigned integers, hexadecimal numbers, and pointers.

This project helps develop a better understanding of variadic functions, string manipulation, type conversions, and formatted output in C.

## Supported Conversions

The mandatory part supports the following conversions:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer address in hexadecimal format.
- `%d`: Prints a signed decimal integer.
- `%i`: Prints an integer in decimal format.
- `%u`: Prints an unsigned decimal integer.
- `%x`: Prints a hexadecimal number using lowercase letters.
- `%X`: Prints a hexadecimal number using uppercase letters.
- `%%`: Prints a percent sign.

## Instructions

### Compilation

Run the following command in the project directory to compile the library:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

Other available commands:

```bash
make clean
make fclean
make re
```

- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Rebuilds the library from scratch.

### Usage

Include the project header in your C file:

```c
#include "ft_printf.h"
```

Compile your test program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o test
```

Run the program:

```bash
./test
```

Example:

```c
ft_printf("Hello, %s! You are %d years old.\n", "Aishah", 22);
```

Expected output:

```text
Hello, Aishah! You are 22 years old.
```

## Algorithm and Data Structure

The implementation processes the format string sequentially, one character at a time, using an index variable.

When the current character is not a percent sign, it is written directly to the standard output using `write()`.

When a percent sign is encountered, the next character is checked to identify the requested conversion. The corresponding argument is retrieved using the variadic argument macros, such as `va_arg()`, and printed according to its type.

For example, `%s` retrieves a string argument and prints its characters. Numeric conversions require the value to be converted into the appropriate textual representation before being written to the output.

The main data structure used is `va_list`, which provides access to the additional arguments passed to the variadic function. The implementation also uses pointers and character arrays to process strings and represent output.

This sequential approach is simple and efficient because the format string is traversed once. The overall processing time depends on the length of the format string and the amount of output produced.

## Resources

- [C Programming Language Reference](https://en.cppreference.com/w/c)
- [Variadic Functions in C](https://en.cppreference.com/w/c/variadic)
- [write() system call](https://man7.org/linux/man-pages/man2/write.2.html)
- The 42 subject and project documentation.

### AI Usage

AI tools were used as learning and debugging assistants during the project. They helped explain C concepts such as variadic functions, pointers, `va_list`, `va_start`, and `va_arg`, clarify the purpose of the Makefile, and identify compilation errors and Norminette issues.

AI was also used to help understand the project structure, break down implementation tasks, and explain the algorithm step by step. The code was developed and tested as part of the learning process, with AI assistance used to understand errors and improve the implementation.