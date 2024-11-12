#ifndef ML_ALGORITHMS_H
#define ML_ALGORITHMS_H

#include "vector.h"
#include "matrix.h"

// Function to train linear regression
void train_linear_regression(Matrix *X, Vector *y, Vector *weights, float learning_rate, int epochs);

// Function to make predictions using trained weights
float predict_linear_regression(Matrix *X, Vector *weights, int row);


// Function to train logistic regression
void train_logistic_regression(Matrix *X, Vector *y, Vector *weights, float learning_rate, int epochs);

// Function to make predictions using trained weights for logistic regression
float predict_logistic_regression(Matrix *X, Vector *weights, int row);

#endif