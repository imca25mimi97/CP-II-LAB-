/*Write a program to define a structure for a complex number (real and imaginary
parts) and write a function to perform addition of two complex numbers.*/
#include <stdio.h>

typedef struct complex{
	float r;
	float i;
} cmplx;

void add(cmplx c1,cmplx c2){
	cmplx c3;
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	printf("%.1f + i%.1f",c3.r,c3.i);
}

int main(){
	cmplx c1,c2;
	printf("Enter the first complex number");
	scanf("%f%f",&c1.r,&c1.i);
	printf("Enter the second complex number");
	scanf("%f%f",&c2.r,&c2.i);
	add(c1,c2);
	return 0;
	
}
