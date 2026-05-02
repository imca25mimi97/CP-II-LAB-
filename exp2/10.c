//Write a program to demonstrate the use of atoi()function.
#include <stdio.h>
int main() {
    char s1[20];
    int i;
    printf("enter string1");
    gets(s1);
    i = atoi(s1);
    printf("integer value is %d",i);
    return 0;
}