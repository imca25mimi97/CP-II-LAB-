#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int emp_id;
    char emp_name[20];
    struct dept
    {
        int dept_id;
        char dept_name[20];
    } d;
}emp;

int main()
{
    emp e[5];
    int n, i, count = 0;
    char search[20];

    printf("Enter number of employees:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Employee Details %d\n", i+1);

        printf("Enter employee id:\n");
        scanf("%d", &e[i].emp_id);

        printf("Enter employee name:\n");
        gets(e[i].emp_name);

        printf("Enter department id:\n");
        scanf("%d", &e[i].d.dept_id);

        printf("Enter department name:\n");
        gets(e[i].d.dept_name);
    }
    
    printf("Enter department name to count:\n");
    gets(search);

    for(i = 0; i < n; i++)
    {
        if(strcmp(e[i].d.dept_name, search) == 0)
        {
            count++;
        }
    }

    printf("Number of employees in %s department = %d\n", search, count);

    return 0;
}
