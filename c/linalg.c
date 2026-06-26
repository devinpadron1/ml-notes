#include <stdlib.h>
#include <stdio.h>
#include "linalg.h"


Matrix *transpose(Matrix *m) {
    int r = m->r;
    int c = m->c;
    int len = m->r * m->c;
    int ct = 0;
    float *dataT = malloc(len * sizeof(float));

    // Reorder data array to match transposed order (right->left, top->bot)
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            int m_idx = j * c + i;
            dataT[ct] = m->data[m_idx];
            ct++;
        }
    }

    Matrix *mT = malloc(sizeof(Matrix));
    mT->r = m->c;
    mT->c = m->r;
    mT->data = dataT;

    return mT;
}

float dotProduct(float *a, float *b, int len) {
    float res = 0;
    for (int i = 0; i < len; ++i)
        res += a[i] * b[i];
    return res;
}

float *getRow(float *mat, int idx, int r, int c) {
    int rowIdxStart = c * idx;
    float* vec = malloc(c * sizeof(float));
    int j = 0;
    for (int i = rowIdxStart; i < c + rowIdxStart; ++i) {
        vec[j] = mat[i];
        j++;
    }
    return vec;
}

Matrix *multiply(Matrix *A, Matrix *B) {
    if (A->c != B->r)
        return NULL;

    int len = A->r * B->c;
    float *d = malloc(len * sizeof(float));

    for (int i = 0; i < A->r; ++i) {
        for (int j = 0; j < B->c; ++j) {
            float *a = getRow(A->data, i, A->r, A->c);
            Matrix *BT = transpose(B);
            float *b = getRow(BT->data, j, BT->r, BT->c);
            d[i * B->c + j] = dotProduct(a, b, A->c);
        }
    }

    Matrix *C = malloc(sizeof(Matrix));
    C->r = A->r;
    C->c = B->c;
    C->data = d;
    
    return C;
}


Matrix *inverse(Matrix *A) {
    // TODO
    return NULL; 
}

void printMatrix(Matrix *A) {
    int idx = 0;
    for (int i = 0; i < A->r; ++i) {
        putchar('[');
        for (int j = 0; j < A->c; ++j)
            printf("%.2f ", A->data[idx++]);
        putchar(']');
        putchar('\n');
    }
    putchar('\n');
}
