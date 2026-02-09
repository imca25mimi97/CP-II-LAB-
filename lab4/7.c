// Develop a program to count occurrences of a specific character in a string
#include <stdio.h>
#include<string.h>

int main(){
	char s[20],j;
	int i,count=0;
	printf("enter a string:");
	gets(s);
	printf("enter the specific character u want to count:");
	scanf("%c",&j);
	while(s[i]!='\0'){
		if(s[i]==j){
			count++;
		}
		i++;
	}
	printf("the total no of %d in the string are:%d",j,count);
}
