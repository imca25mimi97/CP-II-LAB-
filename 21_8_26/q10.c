/*Insert an element in a matrix at a given index*/
#include <stdio.h>

int main(){
	int a[10][10];
	int r1,c1;
	int i,j,keyr,keyc;
	int value;
	printf("------insertion of an element in a matrix..........\n");
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
	printf("Enter the index to insert an element\n");
	scanf("%d %d",&keyr,&keyc);
	for(i=0;i<r1;i++){              
                for(j=0;j<c1;j++){
                        if(keyr==i&&keyc==j){
				printf("Enter the element to insert\n");
				scanf("%d",&value);
				a[i][j]=value;
				printf("Element inserted\n");
				break;
			}
			
                }
        }
	printf("The array after insertion\n");
	for(i=0;i<r1;i++){
      	  for(j=0;j<c1;j++){
         	 printf("%d ",a[i][j]);
                }
           printf("\n");
        }
	return 0;
}


	

