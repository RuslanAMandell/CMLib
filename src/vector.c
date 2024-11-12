// src/vector.c
#include <stdlib.h>
#include "../include/vector.h"

Vector* create_vector(int size) {
    Vector *v = (Vector*)malloc(sizeof(Vector));
    v->data = (float*)malloc(size * sizeof(float));
    v->size = size;
    return v;
}

void free_vector(Vector *v) {
    free(v->data);
    free(v);
}

void set_vector_value(Vector *v, int index, float value) {
    if (index >= 0 && index < v->size) {
        v->data[index] = value;
    }
}

float get_vector_value(Vector *v, int index) {
    if (index >= 0 && index < v->size) {
        return v->data[index];
    }
    return 0; // Return 0 for out-of-bounds (error handling)
}