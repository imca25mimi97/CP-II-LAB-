//Develop a program to count occurrences of a specific character in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    char c;
    int count = 0;
    printf("Enter a string: ");
    gets(s);
    printf("Enter the character to count: ");
    scanf("%c", &c);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.\n", c, count);
    return 0;
}