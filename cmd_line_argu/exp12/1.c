// Write a program to print all command-line arguments passed to the program. 
#include<stdio.h>

void main(int argc,char *argv[]){
	int i;
	for(i=0;i<argc;i++){
		printf("\n%s",argv[i]);
	}
}	
