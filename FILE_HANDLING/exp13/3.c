//Implement a program to append text to an existing text file. 
#include <stdio.h>

int main() {
    FILE *fp;
    int c;

    // 1. Open for reading only ("r")
    fp = fopen("3.txt", "r");
    if (fp != NULL) {
        while ((c = getc(fp)) != EOF) {
            putchar(c);
        }
        fclose(fp); 
    }

    fp = fopen("3.txt", "a");
    if (fp == NULL) return 1;

    fprintf(fp, "sdgfdsgdf\n");
    fclose(fp);

    return 0;
}

