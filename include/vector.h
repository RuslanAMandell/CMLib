// include/vector.h
#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float *data;
    int size;
} Vector;

// Function prototypes
Vector* create_vector(int size);
void free_vector(Vector *v);
void set_vector_value(Vector *v, int index, float value);
float get_vector_value(Vector *v, int index);

#endif