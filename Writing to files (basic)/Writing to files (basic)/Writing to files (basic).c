#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    FILE* f;

    f = fopen("data.txt", "w");
    if (f)
    {
        fputc('s', f);
        fputc('h', f);
        fputc('a', f);
        fputc('l', f);
        fputc('o', f);
        fputc('m', f);
        fputc('\n', f);
    }
    else
    {
        printf("error");
        return;
    }

    fclose(f);

    f = fopen("data.txt", "r");
    char c = fgetc(f);
    int count = 0;
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(f);
        count++;
    }

    fclose(f);

    return 0;
}