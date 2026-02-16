/*Create a nested structure to store a student’s details (name, roll number, and
address where address is another structure).*/
#include <stdio.h>

typedef struct student{
	char name[30];
	int roll_no;
	struct address{
		char state[10];
		char city[30];
		char district[20];
		int	pin_code;
	}add;
}std;

int main(){
	std s1={"Rahul",1,"odisha","bhubaneshwar","khordha",751024};
	printf("Name-%s\nROLL_No-%d\n",s1.name,s1.roll_no);
	printf("state-%s\ncity-%s\ndistrict-%s\npin_code-%d\n",s1.add.state,s1.add.city,s1.add.district,s1.add.pin_code);
	return 0;
}
