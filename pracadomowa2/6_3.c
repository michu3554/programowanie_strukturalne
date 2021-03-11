#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char a;
	for (i = 1; i < 7; i++)
	{
		for (a = 'F'; 'F' - a < i; a--)
		{
			printf("%c", a);
		}
		printf("\n");
	}

	return 0;
}
