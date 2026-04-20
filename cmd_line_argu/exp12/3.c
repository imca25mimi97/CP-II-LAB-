/*Design a program that checks if the number of command-line arguments meets 
specific criteria (e.g., minimum number of arguments). */\
#include <stdio.h>

void main(int argc, char *argv[]) {
 
	if(argc<3){
        	printf("Error: Too few arguments,minimum arguments is 3.\n");
	}
	else{
		printf("more than 2.\n");
	}
}
