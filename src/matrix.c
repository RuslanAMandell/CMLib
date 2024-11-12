// src/matrix.c
#include <stdlib.h>
#include "../include/matrix.h"


Matrix* create_matrix(int rows, int cols) {
    Matrix *m = (Matrix*)malloc(sizeof(Matrix));
    m->data = (float*)malloc(rows * cols * sizeof(float));
    m->rows = rows;
    m->cols = cols;
    return m;
}

void free_matrix(Matrix *m) {
    free(m->data);
    free(m);
}

void set_matrix_value(Matrix *m, int row, int col, float value) {
    if (row >= 0 && row < m->rows && col >= 0 && col < m->cols) {
        m->data[row * m->cols + col] = value;
    }
}

float get_matrix_value(Matrix *m, int row, int col) {
    if (row >= 0 && row < m->rows && col >= 0 && col < m->cols) {
        return m->data[row * m->cols + col];
    }
    return 0; // Return 0 for out-of-bounds
}