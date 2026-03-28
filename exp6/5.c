// Create a function to sort an array in ascending order using pointers. 
#include <stdio.h>

void sort(int *p) {
    int temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(p+ i) > *(p + j)) {
            
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main() {
    int a[5] = {5, 2, 8, 1, 3};

    sort(a);

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(a+ i));
    }

    return 0;
}