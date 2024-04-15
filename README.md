# 0x10. C - printf

## Description
The _printf function produces output according to a given format. It is a custom implementation of the printf function in C. This function accepts a format string containing zero or more directives and writes output to the standard output stream (stdout). The format string may contain conversion specifiers such as %c, %s, and %%, which are replaced by the corresponding arguments passed to the function.
This team project is part of the first year curriculum of Holberton School.
_printf replicates the C standard library printf() function.

---

## Prototype
```int _printf(const char *format, ...);```

## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -pedantic *.c```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters

## Examples

* ```_printf("Hello, Holberton\n")``` *prints "Hello, Holberton", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

---
