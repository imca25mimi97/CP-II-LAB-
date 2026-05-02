#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];
    int i = 0, j = 0, k = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0' || str2[j] != '\0')
    {
        if (str1[i] != '\0')
        {
            result[k] = str1[i];
            i++;
            k++;
        }

        if (str2[j] != '\0')
        {
            result[k] = str2[j];
            j++;
            k++;
        }
    }

    result[k] = '\0';

    printf("Merged string: %s", result);

    return 0;
}