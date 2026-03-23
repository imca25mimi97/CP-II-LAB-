//Write a program to calculate the length of a string using pointers. 
#include <stdio.h>

int main(){
	char a[20];
	char *p;
	int count=0;
	int i;
	
	printf("enter the string-");
	gets(a);
	p=a;
	for(i=0;*(p+i)!=NULL;i++){
		count++;
	}
	printf("the length of the string is %d",count);
	return 0;
}
