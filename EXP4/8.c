/*Write a program to define a structure for a student containing fields for name,
roll number, and marks. Input the details of 10 students and display the details
of the student who has secured highest mark.*/
#include <stdio.h>
struct student{
    char name[20];
    int roll_no;
    float marks;
};
int main(){
    struct student s[10];
    int i, max=0;
    for(i=0;i<10;i++){
        printf("Enter name, roll no and marks of student %d\n",i+1);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].roll_no);
        scanf("%f",&s[i].marks);
        if(s[i].marks>max)
            max=s[i].marks;
    }
    for(i=0;i<10;i++){
        if(s[i].marks==max){
            printf("Name: %s\n",s[i].name);
            printf("Roll no: %d\n",s[i].roll_no);
            printf("Marks: %f\n",s[i].marks);
        }
    }
    return 0;
}