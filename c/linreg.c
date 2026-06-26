/* 
    Linear regression from scratch

    input -> model -> target
    
    y = theta*x + b
    
    - [ ] Train a model with 1 feauture 
    - [ ] Multiple features 
    - [ ] Multiple features 
*/

#include <stdio.h>
#include <stdlib.h>
#include "linalg.h"


int train(Matrix *X, Matrix *y);
float predict(float x);
void test();


int train(Matrix *X, Matrix *y) {
    // Instantiate training parameters
    float paramData[2] = {0.0f, 0.0f};
    Matrix *params = malloc(sizeof(Matrix));
    params->r = 2;
    params->c = 1;
    params->data = paramData;

    int samples = params->r * params->c;

    // TODO: Normalize the data

    // Calculate cost - MSE function
    float sum = 0;
    for (int i = 0; i < samples; ++i) {
        Matrix *tp = transpose(params);
        Matrix *dp = multiply(tp, X);
        
        // inverse
        
        sum += 1.0;
    }

    sum /= 2;

    printf("training...\n");
    return 0;
}

float predict(float x) {
    printf("prediction\n");
    return 0;
}


int main() {
    /// DATA 
    // Input features
    // Starting off with 1 input feature (hours studied)
    float X_data[] = {1.0, 2.0, 3.0, 4.0};
    Matrix *X = malloc(sizeof(Matrix));
    X->r = 1;
    X->c = 4;
    X->data = X_data;

    // Labels - the answers to the test (grades)
    float y_data[] = {75.0, 80.0, 82.0, 95.0};
    Matrix *y = malloc(sizeof(Matrix));
    y->r = 1;
    y->c = 4;
    y->data = y_data;

    printMatrix(X);
    printMatrix(y);

    return 0;
}
