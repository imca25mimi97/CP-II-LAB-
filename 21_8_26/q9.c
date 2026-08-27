//Delete any element chosen by the user from a matrix
#include <stdio.h>

int main(){
	int a[10][10];
	int r1,c1,pos1,pos2;
	int i,j;
	printf("..........Delete an element chosen by the user.........\n");
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
	printf("Enter the index of the element to delete\n");
	scanf("%d %d",&pos1,&pos2);
	for(i=0;i<r1;i++){
       for(j=0;j<c1;j++){
	            if(i==pos1&&j==pos2){
					a[i][j]=0;
					}
		}
	}
	printf("The matrix with deleted element is:\n");
	for(i=0;i<r1;i++){
        	for(j=0;j<c1;j++){
	            printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
