/*Write a C program that uses an enumeration to implement a menu-driven
application.*/

enum menu{add,sub,mult,div};

int main(){
	printf("0-->To add\n");
	printf("1-->To subtarct\n");
	printf("2-->To multiply\n");
	printf("3-->To divide\n");
	enum menu sel;
	printf("-------------THE OPERATION IS-------------\n");
	sel=div;
	printf("%d",sel);
	return 0;
}

