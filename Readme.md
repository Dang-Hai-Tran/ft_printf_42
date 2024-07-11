# Ftprintf

Ftprintf is a custom implementation of the `printf` function in C. This project is designed to mimic the behavior of the standard `printf` function, providing formatted output conversion. It is built on top of a custom library, `libft`, which includes various utility functions.

## Table of Contents

- [Ftprintf](#ftprintf)
  - [Table of Contents](#table-of-contents)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Makefile Targets](#makefile-targets)
  - [Contributing](#contributing)
  - [License](#license)

## Installation

To compile the `ftprintf` library, you need to have `make` and `gcc` installed on your system. Follow these steps to build the library:

1. Clone the repository:
   `git clone https://github.com/Dang-Hai-Tran/ft_printf_42.git`
2. Run `make` to compile the library:
   `make`
   This will generate the `libftftprintf.a` static library in the current directory.

## Usage

To use the `libftprintf` library in your project, include the header file and link against the compiled library:

1. Include the header file in your source code:

```c
#include "ft_printf.h"
// Your code here
```

2. Compile your source code with `libftprintf` library:
   `gcc -o your_program your_program.c -L. -lftprintf`

## Makefile Targets

The project includes a `Makefile` to automate the build process. The available targets are:

-   `all` - Builds the `libft` and `libftprintf` libraries.
-   `clean` - Removes object files.
-   `fclean` - Removes object files and the compiled library.
-   `re` - Rebuilds the library.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
