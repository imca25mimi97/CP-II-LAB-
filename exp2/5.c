// Write a program to check if a string is a palindrome using strrev.
#include <stdio.h>
#include <string.h>

int main(){
	char s1[20];
	char s2[10];
	printf("enter the string u want to check that is palindrome or not:");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	if(strcmp(s1, s2) == 0){
    	printf("the string is palindrome.");
    }
    else{
    	printf("the string is not palindrome.");
    }
    return 0;
}
