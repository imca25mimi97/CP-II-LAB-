#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100], longest[100];
    char word[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (1)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0')
        {
            word[j] = sentence[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (strlen(word) > max)
            {
                max = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}