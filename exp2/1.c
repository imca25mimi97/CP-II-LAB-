// Develop a program to concatenate two strings using strcat.
#include <stdio.h>
#include<string.h>
int main() {
    char s1[20];
    char s2[20];
    printf("enter string1");
    gets(s1);
    printf("enter string2");
    gets(s2);
    strcat(s1,s2);
    printf("concatenated string is %s",s1);
    return 0;
}