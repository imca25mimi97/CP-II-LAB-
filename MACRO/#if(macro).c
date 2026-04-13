// macro with conditional compilation #if
#include <stdio.h>
#define VALUE 2
int main(){
	#if VALUE>3
		printf("value is greater than 3\n");
	#elif VALUE==3
		printf("Value is 3");
	#else 
		printf("value is less than or equal to 2");
	#endif
	return 0;
}
