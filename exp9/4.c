/*Write a function to sort an array of integers in ascending order using call by
reference.*/
#include <stdio.h>
void sortarr(int *arr) {
    int i, j, temp;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 10- i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {

                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10], i;

    printf("Enter elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    sortarr(arr);

    printf("Sorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}