#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int i; 
  	for(i=0;i<argc;i++){
		printf("\n%s",argv[i]);
	}
    	int num1 = atoi(argv[1]);
   	int num2 = atoi(argv[2]);

    	int sum = num1 + num2;
    	int diff = num1 - num2;

    	printf("\nSum: %d\n", sum);
    	printf("Diff: %d\n", diff);
}