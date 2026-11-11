*This project has been created as part of the 42 curriculum by dalinein.*

# ft_printf

## Description

The goal of this project is to recreate the behavior of the original `printf()` function in C.

Through this project, I learned how to work with variadic functions and how to handle different types of arguments using `stdarg.h`.

My `ft_printf` function prints formatted output to the standard output and returns the total number of characters printed.

The project supports the following conversions:

- `%c` : Prints a single character.
- `%s` : Prints a string.
- `%p` : Prints a pointer address in hexadecimal format.
- `%d` : Prints a decimal number.
- `%i` : Prints an integer in base 10.
- `%u` : Prints an unsigned decimal number.
- `%x` : Prints a hexadecimal number using lowercase letters.
- `%X` : Prints a hexadecimal number using uppercase letters.
- `%%` : Prints the percent character `%`.

## Instructions

### Compilation

To compile the library, run the following command from the root of the project:

```bash
make
```

This creates the static library:

```text
libftprintf.a
```

### Makefile commands

- `make` or `make all`: Compiles the library.
- `make clean`: Removes the object files.
- `make fclean`: Removes the object files and the library.
- `make re`: Removes everything generated and recompiles the project.

### Usage

To use `ft_printf` in another C file, include the header:

```c
#include "ft_printf.h"
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "World", 42);
    return (0);
}
```

To build the project, run:

```bash
make
```

This compiles the source files and creates the static library `libftprintf.a`.

To remove the generated object files and library, run:

```bash
make fclean
```

To rebuild the project from scratch, run:

```bash
make re
```

## Algorithm and Data Structure

### Algorithm

The main function `ft_printf` reads the format string character by character.

- If the current character is not `%`, it prints it directly.
- If it finds `%`, it reads the next character to identify the required conversion.
- It uses the corresponding helper function to print the argument.
- It keeps track of the number of characters printed.
- At the end, it returns the total number of printed characters.

### Helper Functions

I divided the code into different files to make it easier to organize and understand.

- `ft_printf.c`: Contains the main function and handles the format conversions.
- `ft_printf_char.c`: Handles character printing.
- `ft_printf_string.c`: Handles string printing.
- `ft_printf_number.c`: Handles signed decimal numbers.
- `ft_printf_unsigned.c`: Handles unsigned decimal numbers.
- `ft_printf_hex.c`: Handles hexadecimal numbers.
- `ft_printf_pointer.c`: Handles pointer addresses.


### Data Structures

I used `va_list` to handle the variable number of arguments passed to `ft_printf`.

The format string is processed directly using a pointer or index while moving through its characters.

I also use integer variables to count the number of characters printed and to return the correct result.

No complex data structures are needed for this project because the format string is processed one character at a time.

## Resources

- The official 42 ft_printf subject.
- `printf` manual: https://man7.org/linux/man-pages/man3/printf.3.html
- `stdarg.h` documentation: https://man7.org/linux/man-pages/man3/stdarg.3.html
- C documentation: https://en.cppreference.com/w/c/variadic

### AI Usage

### AI Usage

I used AI as a learning and debugging tool during this project.

AI helped me fix a problem with NULL pointers in the `%p` conversion, where my function printed `0x0` instead of `(nil)`.

It also helped me understand how hexadecimal numbers work and how to print them using lowercase and uppercase letters (`%x` and `%X`).

I used AI to find errors in my code through debugging and to understand the problems reported by external testers.

AI also helped me organize and format my README file and understand how to explain the algorithm and data structures used in my project.

I wrote and organized the project code myself, and used AI as a support tool to understand errors, improve my code, and learn new concepts.