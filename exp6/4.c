// Implement a function to calculate the sum of all elements in an array using pointers. 
#include <stdio.h>

int sum(int *p) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(p + i);
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int result = sum(arr);

    printf("Sum = %d\n", result);
    return 0;
}
