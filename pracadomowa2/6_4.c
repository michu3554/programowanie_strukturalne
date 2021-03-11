#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a, b, c;
    printf("Podaj wielka litere: ");
    scanf("%c", &a);

    for(b='A'; b <= a; ++b)
    {
        for(c = b; c<a; ++c)
            printf(" ");

            for(c = 'A'; c<b; ++c)
                printf("%c", c);

                for(; c>='A'; --c)
                    printf("%c", c);

        printf("\n");
    }

    return 0;
}
