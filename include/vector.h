// include/vector.h

#ifndef VECTOR_H
#define VECTOR_H

// Define the Vector structure
typedef struct {
    float *data; // Pointer to dynamically allocated data array
    int size;    // Number of elements in the vector
} Vector;

// Function prototypes for vector operations

// Creates a vector with the given size, allocates memory for its data
Vector* create_vector(int size);

// Frees the memory allocated for the vector
void free_vector(Vector *v);

// Sets a value at a specified index in the vector
void set_vector_value(Vector *v, int index, float value);

// Gets the value at a specified index in the vector
float get_vector_value(Vector *v, int index);

#endif // VECTOR_H