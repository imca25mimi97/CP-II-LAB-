// Write a program to convert a string to lowercase using strlwr.
#include <stdio.h>
#include<string.h>

int main(){
	char s1[20];
	printf("enter string1");
	gets(s1);
	strlwr(s1);
	puts(s1);
	return 0;
}
