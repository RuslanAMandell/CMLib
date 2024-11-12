#include <math.h>
#include "../include/ml_algorithms.h"

// Sigmoid function
float sigmoid(float z) {
    return 1.0 / (1.0 + exp(-z));
}

// Train linear regression using gradient descent
void train_linear_regression(Matrix *X, Vector *y, Vector *weights, float learning_rate, int epochs) {
    int m = X->rows;
    int n = X->cols;

    // Initialize weights to zero
    for (int j = 0; j < weights->size; j++) {
        weights->data[j] = 0.0;
    }

    // Gradient descent
    for (int epoch = 0; epoch < epochs; epoch++) {
        for (int j = 0; j < n; j++) {
            float gradient = 0.0;
            for (int i = 0; i < m; i++) {
                // Prediction: weighted sum of inputs
                float prediction = predict_linear_regression(X, weights, i);
                float error = prediction - y->data[i];
                gradient += error * X->data[i * n + j]; // Partial derivative
            }
            weights->data[j] -= learning_rate * gradient / m;
        }
    }
}

// Make predictions using trained weights
float predict_linear_regression(Matrix *X, Vector *weights, int row) {
    float prediction = 0.0;
    int n = X->cols;
    for (int j = 0; j < n; j++) {
        prediction += X->data[row * n + j] * weights->data[j];
    }
    return prediction;
}


// Train logistic regression using gradient descent
void train_logistic_regression(Matrix *X, Vector *y, Vector *weights, float learning_rate, int epochs) {
    int m = X->rows;
    int n = X->cols;

    // Initialize weights to zero
    for (int j = 0; j < weights->size; j++) {
        weights->data[j] = 0.0;
    }

    for (int epoch = 0; epoch < epochs; epoch++) {
        for (int j = 0; j < n; j++) {
            float gradient = 0.0;
            for (int i = 0; i < m; i++) {
                float prediction = predict_logistic_regression(X, weights, i);
                float error = prediction - y->data[i];
                gradient += error * X->data[i * n + j];
            }
            weights->data[j] -= learning_rate * gradient / m;
        }
    }
}

// Make predictions using trained weights
float predict_logistic_regression(Matrix *X, Vector *weights, int row) {
    float linear_sum = 0.0;
    int n = X->cols;
    for (int j = 0; j < n; j++) {
        linear_sum += X->data[row * n + j] * weights->data[j];
    }
    return sigmoid(linear_sum);
}


// Calculate accuracy based on predicted classes and actual classes
float calculate_accuracy(Matrix *X, Vector *y, Vector *weights) {
    int correct = 0;
    for (int i = 0; i < X->rows; i++) {
        float prediction = predict_logistic_regression(X, weights, i);
        int predicted_class = prediction >= 0.5 ? 1 : 0;
        if (predicted_class == (int)y->data[i]) {
            correct++;
        }
    }
    return (float)correct / X->rows;
}