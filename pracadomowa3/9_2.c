#include <stdio.h>
#include <stdlib.h>

void rzad_zn(char, int, int);

int main(void)
{
	char ch;
	int i, j;

	printf("Podaj znak i zakres kolumn: ");
    scanf("%c %u %u", &ch, &i, &j);
    rzad_zn(ch, i, j);
    printf("\n");

	return 0;
}

void rzad_zn(char ch, int i, int j)
{
	int x;
	for (x = 1; x < i; x++)
	{
		putchar(' ');
	}

	for (; x <= j; x++)
	{
		putchar(ch);
	}
}
