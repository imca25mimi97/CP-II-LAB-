//Create a program to remove all spaces from a string using call by reference.
#include <stdio.h>
#include<string.h>
void removeSpaces(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeSpaces(str);
    printf("String without spaces: %s", str);
    return 0;
}