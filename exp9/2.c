//Write a program to reverse a string using call by reference.
#include <stdio.h>
#include <string.h>

void revstr(char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;

        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    revstr(str);

    printf("Reversed string: %s\n", str);

    return 0;
}