//Implement a function to count the number of words in a string using pointers.
#include <stdio.h>
#include <string.h>
int count_words(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        while (*str == ' ' || *str == '\t' || *str == '\n')
        {
            str++;
        }
        count++;
        while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
        {
            str++;
        }
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int word_count = count_words(str);
    printf("Number of words in the string: %d\n", word_count);
    return 0;
}