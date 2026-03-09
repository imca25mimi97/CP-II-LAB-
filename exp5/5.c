#include <stdio.h>

int main() {
    long a = 123456789L;
    long *p = &a;

    printf("%ld\n", a);
    *p = 987654321L;
    printf("%ld\n", a);

    return 0;
}

