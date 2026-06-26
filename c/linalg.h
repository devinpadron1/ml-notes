typedef struct {
    int r;  // rows
    int c;  // columns
    float *data;
} Matrix;

void printMatrix(Matrix *A);
float dotProduct(float *a, float *b, int len);
float *getRow(float *mat, int idx, int r, int c);
Matrix *transpose(Matrix *m);
Matrix *multiply(Matrix *A, Matrix *B);
Matrix *inverse(Matrix *A);
