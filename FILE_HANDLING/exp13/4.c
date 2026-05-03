/*Write a program to compare two text files and check if their contents are
identical.*/

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp1, *fp2;
    char ch1, ch2;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    while ((ch1 = fgetc(fp1)) != EOF && (ch2 = fgetc(fp2)) != EOF)
    {
        if (ch1 != ch2)
        {
            printf("Files are not identical\n");
            return 0;
        }
    }
    if (ch1 == EOF && ch2 == EOF)
    {
        printf("Files are identical\n");
    }
    else
    {
        printf("Files are not identical\n");
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}