#include <stdio.h>

typedef struct bits{
    unsigned int a: 1;
    unsigned int b: 1;
} b;

int main(){
    b b1;

    b1.a=1;
    b1.b=0;

    printf("a=%d\n",b1.a);
    printf("b=%d\n",b1.b);
    
    printf("size of the structure is-%d\n",sizeof(b1));
}
