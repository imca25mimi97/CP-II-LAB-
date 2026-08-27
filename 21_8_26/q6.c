/*Find the largest element present in a matrix.*/
#include <stdio.h>
int main(){
        int m,n,key,max=0;
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
	printf("The largest number is:\n");
	for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        if(a[i][j]>max){
				max=a[i][j];
			}
                }
        }
	printf("%d\n",max);
}


