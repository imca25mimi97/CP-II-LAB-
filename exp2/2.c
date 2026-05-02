// Write a program to compare two strings using strcmp.
#include <stdio.h>
#include<string.h>
int main() {
    char s1[20];
    char s2[20];
    printf("enter string1");
    gets(s1);
    printf("enter string2");
    gets(s2);
    if(strcmp(s1,s2) == 0) {
        printf("strings are equal");
    }
    else {
        printf("strings are not equal");
    }
    return 0;
}