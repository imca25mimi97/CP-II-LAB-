// How can you initialize an array of structures? Show an example.
#include <stdio.h>
struct student{
    int roll_no;
    char name[20];
    float marks;
};
int main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter roll no, name and marks of student %d\n",i+1);
        scanf("%d",&s[i].roll_no);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<3;i++){
        printf("Roll no: %d\n",s[i].roll_no);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %f\n",s[i].marks);
    }
    return 0;
}