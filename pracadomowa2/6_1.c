#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 26

int main(void)
{
    char alfabet[ROZMIAR];
    int i;

    for (i = 0; i < ROZMIAR; i++)
    {
        alfabet[i] = (int)'a' + i;
        printf("%c", alfabet[i]);
    }
    return 0;
}
