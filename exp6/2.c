//Write a program to copy one string to another using pointer. 
#include <stdio.h>
#include <string.h>

int main(){
	char a[4]="abc";
	char b[4];
	char *p=a;
	int i;
	
	strcpy(b,p);
	
	for(i=0;b[i]!=NULL;i++){
		printf("%c\n",b[i]);
	}
	return 0;
}
