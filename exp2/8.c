// Implement a program to check if a substring exists within a string using strstr.
#include <stdio.h>
#include<string.h>

int main(){
	char s1[20];
	char s2[20];
	printf("enter string1");
	gets(s1);
	printf("enter string2");
	gets(s2);
	if(strstr(s1,s2) != NULL){
		printf("substring found");
	}
	else {
		printf("substring not found");
	}
    return 0;
}

