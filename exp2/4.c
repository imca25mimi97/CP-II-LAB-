//Write a program to copy one string to another using strcpy.
#include <stdio.h>
#include<string.h>

int main(){
	char s1[20];
	char s2[10];
	printf("enter string1:");
	gets(s1);
	strcpy(s2,s1);
	printf("copied string:");
	puts(s2);
	return 0;
}
