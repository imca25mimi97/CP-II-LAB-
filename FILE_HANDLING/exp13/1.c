//Implement a program to read content from a text file and print it to the console.
#include <stdio.h>
void main(){
	FILE *fp;
	int c;
	fp=fopen("1.txt","r");
	do{
		c=getc(fp);
		putchar(c);
	}while(c!=EOF);
	fclose(fp);
}
