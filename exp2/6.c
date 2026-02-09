//Develop a program to convert a string to uppercase using strupr.
#include <stdio.h>
#include<string.h>

int main(){
	char s1[20];
	printf("enter string1");
	gets(s1);
	strupr(s1);
	puts(s1);
	return 0;
}
