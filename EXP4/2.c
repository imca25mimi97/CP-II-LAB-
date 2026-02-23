//Write a program to use enumeration to represent days of the week.
#include <stdio.h>
enum nameofdays{Monday,Tueday,Wednesday,Thursday,Friday,Saturday,Sunday};
int main(){
	enum nameofdays x;
	x=Sunday;
	printf("%d",x);
	return 0;
}
