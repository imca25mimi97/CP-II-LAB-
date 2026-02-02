#include<stdio.h>
#include<string.h>

int main(){
	char s[40];
	int i;
	printf("enter a sentence:");
	gets(s);
	while(s[i]!='\0')
	{
			if(s[i]==32)
			{
				s[i]='-';
			}
			i++;
	}
	puts(s);
}
