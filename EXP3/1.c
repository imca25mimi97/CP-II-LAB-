/*Write a program to define a structure for a student containing fields for name,
roll number, and marks. Input and display the details.*/

#include <stdio.h>

typedef struct student{
	char name[20];
	int roll_no;
	int marks;
} stud;

int main(){
	stud s={"Rahul",1,70};
	printf("name-%s\nroll_no-%d\nmarks-%d\n",s.name,s.roll_no,s.marks);
	return 0;
}
