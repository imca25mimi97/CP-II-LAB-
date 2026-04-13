//macro with function
#include <stdio.h>
# define GREATER(a,b) (a>b?a:b)

void main(){
	printf("\n The grater number=%d",GREATER(5,10));
}
