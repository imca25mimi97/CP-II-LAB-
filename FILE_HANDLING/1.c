// file handling in c
#include <stdio.h>
void main(){
	FILE *fp;
	int c;
	fp=fopen("123.txt","r");
	do{
		c=getc(fp);
		putchar(c);
	}while(c!=EOF);
	fclose(fp);
}
