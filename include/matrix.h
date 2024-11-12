// include/matrix.h
#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    float *data;
    int rows;
    int cols;
} Matrix;

// Function prototypes
Matrix* create_matrix(int rows, int cols);
void free_matrix(Matrix *m);
void set_matrix_value(Matrix *m, int row, int col, float value);
float get_matrix_value(Matrix *m, int row, int col);

#endif