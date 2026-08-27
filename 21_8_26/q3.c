/*Check if two given matrics are identical or not.*/
#include <stdio.h>
int main(){
        int a[10][10],b[10][10];
        int r1,c1,r2,c2;
        int i,j;
		int n=1,check=0;
        printf(".....checking if two matrices are identical or not.....\n");
        while(n==1){
                printf("Enter the no of rows of 1st matrix\n");
                scanf("%d",&r1);
                printf("Enter the no of cols of 1st matrix\n");
                scanf("%d",&c1);
                printf("Enter the no of rows of 2nd matrix\n");
                scanf("%d",&r2);
                printf("Enter the no of cols of 2nd matrix\n");
                scanf("%d",&c2);
                if(r1!=r2||c1!=c2){
				printf("They are not identical\n");
                        printf("----------TRY AGAIN----------\n");
                }
                else{
                        printf("Enter the elements of the 1st matrix:\n");
                        for(i=0;i<r1;i++){
                                for(j=0;j<c1;j++){
                                        scanf("%d",&a[i][j]);
                                }
                        }
                        printf("Enter the elements of the 2nd matrix:\n");
                        for(i=0;i<r2;i++){
                                for(j=0;j<c2;j++){
                                        scanf("%d",&b[i][j]);
                                }
                        }
						for(i=0;i<r2;i++){
							for(j=0;j<c2;j++){
								if(a[i][j]!=b[i][j]){
									check++;
								}
								
							}
                        }
                        if(check>0){
							printf("They are not identical\nTry Again\n");
							continue;
						}
						else{
							printf("They are identical\n");
						}
						break;
				}
		
	}
	return 0;
}


