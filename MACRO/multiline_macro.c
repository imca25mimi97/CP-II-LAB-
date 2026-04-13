// mutiline macro
#include<stdio.h>
#define ELEMENTS 1,\
				2,\
				3
int main(){
	int arr[]={ELEMENTS};
	int i;
	for(i=0;i<3;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
