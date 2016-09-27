typedef struct matrixes {
    int **m;
    int rows;
    int columns;
} matrix;

const matrix INIT_MATRIX;

void getMatrix(int linhas, int colunas, matrix *m);
void printMatrix(matrix m);
void freeMatrix(matrix *m);
void zeroMatrix(matrix m);
void fillRandMatrix(matrix m, int range);
void sumMatrix(matrix x, matrix y, matrix *z);
void subMatrix(matrix x, matrix y, matrix *z);
void multMatrix(matrix x, matrix y, matrix *z);
void transMatrix(matrix x, matrix *y);
//void cleanMatrix(matrix *m);
//int validMatrix(matrix m);
