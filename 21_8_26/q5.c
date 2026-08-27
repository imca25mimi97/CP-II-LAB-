// Read a matrix and find its transpose.
#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int r1, c1;
    int i, j;

    printf("..........Transpose of a matrix.........\n");

    printf("Enter the no of rows of matrix: ");
    scanf("%d", &r1);

    printf("Enter the no of cols of matrix: ");
    scanf("%d", &c1);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");

    for (i = 0; i < c1; i++) {
        for (j = 0; j < r1; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
