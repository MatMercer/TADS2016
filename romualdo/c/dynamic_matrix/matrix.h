typedef struct matrixes {
    int **m;
    int rows;
    int columns;
} matrix;

void getMatrix(int linhas, int colunas, matrix *m);
void printMatrix(matrix m);
void freeMatrix(matrix *m);
void zeroMatrix(matrix m);
void fillRandMatrix(matrix m, int range);
matrix sumMatrix(matrix x, matrix y);
matrix subMatrix(matrix x, matrix y);
matrix multMatrix(matrix x, matrix y);
matrix transMatrix(matrix x);
matrix initMatrix();
int validMatrix(matrix m);
