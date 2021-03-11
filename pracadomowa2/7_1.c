#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    int i = 0;
    while(input!='#'){
        input = getchar();
        i++;
        }
    printf("%d", i+1);
    return 0;
}
