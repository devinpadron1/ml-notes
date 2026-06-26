#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int r;
    int c;
    float *data;
} Matrix;


int main() {
    const int len_x = 6;
    float *x = malloc(len_x * sizeof(float));
    x[0] = 69.420;

    Matrix m = {
        .r = 2,
        .c = 3,
        .data = x,
    };

    // Transpose
    float dataT[len_x] = {0};
    int ct = 0;
    for (int i = 0; i < m.c; ++i) {
        for (int j = 0; j < m.r; ++j) {
            // Transpose index
            int x_idx = j * m.c + i;
            dataT[ct] = x[x_idx];
            ct++;
        }
    }

    return 0;
}
