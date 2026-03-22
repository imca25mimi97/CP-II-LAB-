//Write a program to reverse the elements of an array in-place using pointers.
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int *start = a;
    int *end = a + 4;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
