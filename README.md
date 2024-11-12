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
   git clone https://github.com/RuslanAMandell/CMLib.git
   cd CMLib

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

## Permanent Installation (System-Wide)

If you have `sudo` privileges, you can make CMLib available system-wide by copying the library to `/usr/local/lib` and updating the linker cache.

1. Copy the library to a system-wide directory:

   ```bash
   sudo cp build /usr/local/lib/

## Usage

Once installed, you can include and link the library in your own C projects.

### Including the Library

In your C code, include the main header file CMLib.h (or your chosen name if different):

 ```bash
   #include <CMLib.h>
   ```

### Compiling Your Code with the Library

If the library is installed, compile your program by linking with -lCMLib:

```bash
   gcc my_program.c -lCMLib -o my_program
```

If you’re not installing the library system-wide, provide paths to the include directory and library manually:

```bash
   gcc my_program.c -I/path/to/CMLib/include -L/path/to/CMLib/build -lCMLib -o my_program
```

## Examples

Check the examples/ directory for example programs demonstrating how to use the library.

To compile an example, navigate to the examples directory and use the following commands:

```bash
  cd examples
  gcc main.c -I../include -L../build -lCMLib_ -o example
  ./example
```

## Data Handling

CMLib is designed to focus on core machine learning algorithms, leaving data parsing up to the user. Here are some recommendations for loading data:

- **CSV**: Use `libcsv` or write a simple CSV parser to read data from CSV files.
- **JSON**: Use `cJSON` to load data from JSON files.

After parsing, convert the data into an array or matrix format compatible with CMLib’s functions.

## Documentation

Each function is documented within the header files in the include directory. You can refer to these files for details on how to use specific functions and structures.

## License

This project is licensed under the MIT License - see the LICENSE file for details
