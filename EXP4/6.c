/*Write a program to define a structure for a book with title, author, and price.
Input details for 10 books and display them.*/
#include <stdio.h>
struct book{
    char title[20];
    char author[20];
    float price;
};
int main(){
    struct book b[10];
    int i;
    for(i=0;i<10;i++){
        printf("Enter title, author and price of book %d\n",i+1);
        scanf("%s",&b[i].title);
        scanf("%s",&b[i].author);
        scanf("%f",&b[i].price);
    }
    for(i=0;i<10;i++){
        printf("Title: %s\n",b[i].title);
        printf("Author: %s\n",b[i].author);
        printf("Price: %f\n",b[i].price);
    }
    return 0;
}