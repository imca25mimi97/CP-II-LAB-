/*Write a program to find the frequency of a given character in a string using
pointers.*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char ch;
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The frequency of %c is %d", ch, count);
    return 0;
}