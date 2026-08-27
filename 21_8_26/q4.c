/*Read a matrix and replace all its diagonal elements as zero.*/
#include <stdio.h>

int main(){
	int a[10][10];
	int r1,c1;
	int i,j;
	printf("..........Replace all diagonal elements to zero.........\n");
	printf("Enter the no of rows of matrix\n");
    scanf("%d",&r1);
    printf("Enter the no of cols of matrix\n");
    scanf("%d",&c1);
	printf("Enter the elements of the matrix:\n");
        for(i=0;i<r1;i++){
        	for(j=0;j<c1;j++){
	            scanf("%d",&a[i][j]);
		}
	}
	// putting zeros to diagonal matrices
        for(i=0;i<r1;i++){
        	for(j=0;j<c1;j++){
				if(a[i]==a[j]){
					a[i][j]=0;
				}
			}
		}
		printf("The matrix with diagonal elements is 0 \n");
		for(i=0;i<r1;i++){
        	for(j=0;j<c1;j++){
	            printf("%d ",a[i][j]);
		}
		printf("\n");
		}
	}

                   
