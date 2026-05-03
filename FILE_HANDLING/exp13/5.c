/*Create a program to copy the content of one text file into another.*/

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}