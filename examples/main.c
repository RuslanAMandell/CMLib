// main.c
#include <stdio.h>
#include <stdlib.h>
#include "../include/vector.h"
#include "../include/matrix.h"
#include "../include/ml_algorithms.h"

int main() {
    // Example data for a simple linear regression model
    // Let's assume a simple dataset with 3 examples and 2 features each
    float X_data[] = {1.0, 2.0,  // Features for example 1
                      2.0, 3.0,  // Features for example 2
                      3.0, 4.0}; // Features for example 3
    float y_data[] = {3.0, 5.0, 7.0};  // Target values (linear relationship y = 1 + 2 * x)

    int rows = 3; // Number of examples
    int cols = 2; // Number of features

    // Initialize the feature matrix X and target vector y
    Matrix *X = create_matrix(rows, cols);
    Vector *y = create_vector(rows);

    // Copy data into matrix X and vector y
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            set_matrix_value(X, i, j, X_data[i * cols + j]);
        }
        set_vector_value(y, i, y_data[i]);
    }

    // Initialize weights vector for linear regression (size = number of features)
    Vector *weights = create_vector(cols);

    // Train the model with linear regression
    float learning_rate = 0.02;
    int epochs = 5000;
    train_linear_regression(X, y, weights, learning_rate, epochs);

    // Make a prediction for a new data point
    float new_data[] = {4.0, 5.0}; // A new data point to predict on
    Matrix *new_data_matrix = create_matrix(1, cols);
    for (int j = 0; j < cols; j++) {
        set_matrix_value(new_data_matrix, 0, j, new_data[j]);
    }

    float prediction = predict_linear_regression(new_data_matrix, weights, 0);
    printf("\nPrediction for new data point [4.0, 5.0]: %f\n", prediction);

    // Free allocated memory
    free_matrix(X);
    free_vector(y);
    free_vector(weights);
    free_matrix(new_data_matrix);

    return 0;
}