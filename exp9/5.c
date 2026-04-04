// Create a program to calculate the transpose of a matrix using call by reference.

#include <stdio.h>

void transpose(int mat[10][10], int res[10][10]) {
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            res[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[10][10], res[10][10];
    int i, j;

    printf("Enter matrix elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    transpose(mat, res);

    printf("Transpose of the matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}