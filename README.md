<h1 align ="center"> _printf Project </h1>
<br>

![Printf_project](media/cover_readme.jpg "Printf_project")

## Overview

A custom made printf function built in C using only the write, malloc, free, va_start, va_copy, va__arg, and va_end non custom functions.

The custom printf function is called using _printf() and will take in a format string, followed by an optional comma and argument list.

```
int _printf(const char *format, ...);
```

This is the prototype for our custom printf and will return the number of chararacters printed or in the case of a percentage sign at the end of a string, -1. A percentage sign and a specific conversion specifier in our format string will indicate a special print within the format string when matched with a corresponding provided argument.


## Getting Started

* [Ubuntu 14.04 LTS](http://releases.ubuntu.com/14.04/) - Operating system required.

* [GCC 4.8.4](https://gcc.gnu.org/gcc-4.8/) - Compiler used



## Installing and Using

Clone the repository into a new directory:

```
$ git clone https://github.com/sebaslherrera/printf
```

Create a main file and include the header `holberton.h`:

Example `main.c`:

```
#include "holberton.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compile with the following:

```
$ gcc *.c -o main
```

Finally, run:

```
$ ./main
Hello, World!
$
```


## Features

The available convertion specifiers are:

- %c: Prints a single character.

- %s: Prints a string of characters.

- %d: Prints integers.

- %i: Prints integers.

- %b: Prints the binary representation of a decimal.

- %u: Prints unsigned integers

- %x: Prints the hexadecimal representation of an unsigned decimal in lowercase 
letters

- %X:Prints the hexadecimal representation of an unsigned decimal in uppercase letters



## Authors

* Sebastian Lopez <[sebaslherrera](https://github.com/sebaslherrera)>
* Joan Sebastian Garcia <[Noah172](https://github.com/Noah172)>

## License

This project is licensed under the MIT License

## Acknowledgements

The `_printf` function emulates functionality of the C standard library
function `printf`. This README borrows from the Linux man page
[printf(3)](https://linux.die.net/man/3/printf).