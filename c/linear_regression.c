/* 
    Linear regression from scratch

    input -> model -> target
    
    y = theta*x + b
    
    - [ ] Train a model with 1 feauture 
    - [ ] Multiple features 
    - [ ] Multiple features 
*/

#include <stdio.h>


int train(float X[], float y[], int features, int samples) {
    // Instantiate training parameters
    float params[][] = {
        {0.0},
        {0.0}
    };

    // TODO: Normalize the data


    // Calculate cost - MSE function
    float sum = 0;
    for (int i = 0; i < samples; ++i) {
        // dot product
        float tp = transpose(params);
        // float dp = dot_prod(tp, X);
        
        sum += 0;
    }

    sum /= 2;

    printf("training...\n");
    return 0;
}


float[][] traspose(float matrix[][]) {
    /*
        [
            [1, 2, 3]
            [4, 5, 6]
        ]

        ^^-- to --vv

        [
            [1, 4]
            [2, 5]
            [3, 6]

        ]
    */

    return {{0.0}};
}


float predict(float x) {
    printf("prediction\n");
    return 0;
}


int main() {
    /// DATA 
    // Input features
    // Starting off with 1 input feature (hours studied)
    int samples = 4;
    int features = 1;
    float X[] = {1.0, 2.0, 3.0, 4.0};
    
    // Labels - the answers to the test (grades)
    float y[] = {75.0, 80.0, 82.0, 95.0};

    train(X, y, features, samples);

    float x = 5;
    predict(x);
   
    return 0;
}
