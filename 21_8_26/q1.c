/*Read and display a two dimensional array, where the number of rows and columns are
given as input by the user.*/
#include <stdio.h>

int main(){
	int m,n;
	printf("Enter the number of rows:\n");
	scanf("%d",&m);
	printf("Enter the number of coloumns:\n");
        scanf("%d",&n);
	int a[m][n];
	printf("Enter the elements\n");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array is:\n");
	for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        printf("%d\t",a[i][j]);
        	}
		printf("\n");
        }
}


