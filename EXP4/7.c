/*Write a program to define a structure within another structure to store details of
an employee (name, ID, salary and department details). Store the details of 10
employees and sort them according to the salary.*/
#include <stdio.h>
struct employee{
    char name[20];
    int id;
    float salary;
    struct department{
        char name[20];
        int id;
    }d;
};

int main(){
    struct employee e[10];
    int i;
    for(i=0;i<10;i++){
        printf("Enter name, id, salary and department name and id of employee %d\n",i+1);
        scanf("%s",&e[i].name);
        scanf("%d",&e[i].id);
        scanf("%f",&e[i].salary);
        scanf("%s",&e[i].d.name);
        scanf("%d",&e[i].d.id);
    }
    for(i=0;i<10;i++){
        printf("Name: %s\n",e[i].name);
        printf("ID: %d\n",e[i].id);
        printf("Salary: %f\n",e[i].salary);
        printf("Department Name: %s\n",e[i].d.name);
        printf("Department ID: %d\n",e[i].d.id);
    }
    return 0;
}