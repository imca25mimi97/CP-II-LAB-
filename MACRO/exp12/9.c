//Implement a macro to determine the maximum of two numbers.
#include <stdio.h>

#define MAX(a, b) (a>b ? a:b)

void main() {
    int x = 10, y = 20;
    int res = MAX(x, y);

    printf("Maximum = %d\n", res);
}