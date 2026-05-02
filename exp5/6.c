/*Write a program that passes an integer variable by reference to a function using a
pointer. Modify the value in the function and print it in the main program.*/

#include <stdio.h>
void change(int *ip) {
    *ip = 10;
}
int main() {
    int a = 5;
    change(&a);
    printf("%d", a);
    return 0;
}