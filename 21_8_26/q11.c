/*Search an element from a matrix and display its position where it is present.*/
#include <stdio.h>
int main(){
	int m,n,key;
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
        printf("Enter the element to search:\n");
        scanf("%d",&key);
	for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        if(a[i][j]==key){
				printf("The element is in the position:\n");
				printf("A[%d][%d]\n",i,j);
                }
        }
	}
}



