/*Implement a program to reverse the digits of a given integer using call by
reference.*/
#include <stdio.h>
void reverse(int *num) {
    int rev = 0;
    while (*num != 0) {
        rev = rev * 10 + (*num % 10);
        *num /= 10;
    }
    *num = rev;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverse(&num);
    printf("Reversed number: %d\n", num);
    return 0;
}