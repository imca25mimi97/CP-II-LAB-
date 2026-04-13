// #ifdef and #ifndef to check whether a macro is defined
#define VALUE 10
#include <stdio.h>
void main(){
		#ifdef VALUE
			printf("value defined & value=%d\n",VALUE);
		#endif
		
		#ifndef MAX
			printf("Macro is not defined");
		#endif
		
		#define MAX 100
		#ifndef MAX 
			#error "MAX is not defined!"
		#endif
} 
