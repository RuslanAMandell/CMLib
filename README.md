# CMLib - "C Machine Learning Library"

A lightweight machine learning library implemented in C, designed for educational purposes and embedded systems. This library includes simple implementations of linear regression and logistic regression.

## Features

- Basic data structures: Vector and Matrix
- Machine learning algorithms:
  - Linear Regression
  - Logistic Regression
- Gradient descent optimization

## Getting Started

### Prerequisites

- A C compiler (e.g., `gcc`)
- `make` (optional, if using the Makefile)
- `cmake` (optional, if using CMake for building)

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/RuslanAMandell/Machine-Learning-Library-C.git
   cd Machine-Learning-Library-C

2. Build the Library (using CMake):
   
   ```bash
   mkdir build
   cd build
   cmake ..
   make

 3. Install the Library (optional):
    
   This step installs the library files to your system, making it easier to include and link in other projects. Run with sudo if required:
    
   ```bash
   sudo make install
   ```
  This will install:

  Header files in /usr/local/include
  Libraries in /usr/local/lib

## Usage

Once installed, you can include and link the library in your own C projects.

### Including the Library

In your C code, include the main header file ml_library.h (or your chosen name if different):

 ```bash
   #include <ml_library.h>
   ```

### Compiling Your Code with the Library

If the library is installed, compile your program by linking with -lml_library:

```bash
   gcc my_program.c -lml_library -o my_program
```

If you’re not installing the library system-wide, provide paths to the include directory and library manually:

```bash
   gcc my_program.c -I/path/to/Machine-Learning-Library-C/include -L/path/to/Machine-Learning-Library-C/build -lml_library -o my_program
```

## Examples

Check the examples/ directory for example programs demonstrating how to use the library.

To compile an example, navigate to the examples directory and use the following commands:

```bash
  cd examples
  gcc main.c -I../include -L../build -lmy_ml_library -o example
  ./example
```

## Documentation

Each function is documented within the header files in the include directory. You can refer to these files for details on how to use specific functions and structures.

## License

This project is licensed under the MIT License - see the LICENSE file for details
