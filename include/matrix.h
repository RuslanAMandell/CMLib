// include/matrix.h

#ifndef MATRIX_H
#define MATRIX_H

// Define the Matrix structure
typedef struct {
    float *data; // Pointer to dynamically allocated 1D array storing matrix elements
    int rows;    // Number of rows in the matrix
    int cols;    // Number of columns in the matrix
} Matrix;

// Function prototypes for matrix operations

// Creates a matrix with the specified number of rows and columns, allocates memory for its data
Matrix* create_matrix(int rows, int cols);

// Frees the memory allocated for the matrix
void free_matrix(Matrix *m);

// Sets a value at a specified row and column in the matrix
void set_matrix_value(Matrix *m, int row, int col, float value);

// Gets the value at a specified row and column in the matrix
float get_matrix_value(Matrix *m, int row, int col);

#endif // MATRIX_H