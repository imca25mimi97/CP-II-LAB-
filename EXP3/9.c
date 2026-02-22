#include <stdio.h>
#include<string.h>

typedef struct Car {
    char make[50];
    char model[50];
    int year;
    struct Owner {
        char name[50];
        char city[50];
    }o;
}car;

int main() {
    car car1;

    // Input Car details
    printf("enter car make:");
    gets(car1.make);
    printf("enter car model:");
    gets(car1.model);
    printf("enter manufacturing year:");
    scanf("%d", &car1.year);
    printf("enter owner's name:");
    gets(car1.o.name);
    printf("enter owner's city:");
    gets(car1.o.city);

    printf("Car Details\n");
    printf("Make: %s\n", car1.make);
    printf("Model: %s\n", car1.model);
    printf("Year: %d\n", car1.year);

    printf("Owner Detail\n");
    printf("Name: %s\n", car1.o.name);
    printf("City: %s\n", car1.o.city);

    return 0;
}
