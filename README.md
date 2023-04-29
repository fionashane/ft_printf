
# ft_printf - 42 Project

![ft_printf](https://img.shields.io/badge/ft_printf-42-success)

The **ft_printf** project is part of the curriculum at [42 school](https://www.42.fr/) and aims to create a function that mimics the behavior of the standard C library function `printf`.

## Project Objectives

The project aims to introduce students to the basics of variadic functions and string formatting, and provides them with an opportunity to practice the following skills:
- Advanced memory allocation and management
- String manipulation and formatting
- Variadic functions
- Bit manipulation
- Project organization and modularization

## How to use

To use the **ft_printf** function, you need to:
1. Clone the repository to your local machine
```bash
git clone https://github.com/your_username/ft_printf.git
```

2. Compile the library using the Makefile
```bash
make
```

3. Include the appropriate header file in your C file
```c
#include "ft_printf.h"
```

4. Call the `ft_printf` function with the desired format string and any additional arguments
```c
ft_printf("Hello, %s!\n", "world");
```

## Supported Format Specifiers

The **ft_printf** function supports the following format specifiers:
- `%c`: character
- `%s`: string
- `%p`: pointer
- `%d`: decimal integer (signed)
- `%i`: integer (signed)
- `%u`: unsigned decimal integer
- `%x`: hexadecimal integer (lowercase)
- `%X`: hexadecimal integer (uppercase)
- `%%`: literal `%` character

## Credits

The **ft_printf** project was developed by [42 school](https://www.42.fr/).

## License

This project is licensed under the [MIT license](https://opensource.org/licenses/MIT).
