/*Find sum of all elements of each row of a matrix*/
#include <stdio.h>

int main(){
	int m,n;
        printf("Enter the number of rows:\n");
        scanf("%d",&m);
        printf("Enter the number of coloumns:\n");
        scanf("%d",&n);
        int a[m][n];
        printf("Enter the elements\n");
        int i,j,sum=0;
 	for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        scanf("%d",&a[i][j]);
                }
        }
	for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                   sum=sum+a[i][j];
                }
		printf("Sum of %drow is %d\n",i+1,sum);
                sum=0;

        }
}


