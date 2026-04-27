/*Write a program to count the number of lines, words, and characters in a given 
text file. */
#include <stdio.h>

void main(){
	FILE *fp;
	char ch;
	int l=0,w=0,c=0;
	
	fp=fopen("2.txt","r");
	if(fp==NULL){
		printf("Cannot open for reading \n");
		exit(1);
	}
	do{
		ch=getc(fp);
		if(ch=='\n'){
			l++;
		}
		c++;
	}while(ch!=EOF);
	fclose(fp);
	printf("there are %d characters\n",c);
	printf("there are %d lines\n",l);
}
