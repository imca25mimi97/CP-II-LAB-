/*Write a program demonstrating pointer arithmetic with a double array. Show
how to iterate through the array using a pointer.*/

#include <stdio.h>

int main(){
	double a[]={1,2,3,4};
	double* p=a;
	printf("%lf\n",*(p++));
	printf("%lf",*(p++));
}
