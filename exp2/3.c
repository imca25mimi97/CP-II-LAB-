//Create a program to find the length of a string using strlen.
#include <stdio.h>
#include<string.h>

int main(){
	char s1[20];
	printf("enter string1");
	gets(s1);
	printf("length of the string is %d",strlen(s1));
	return 0;
}
