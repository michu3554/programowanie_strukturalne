#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 2, n;
    printf("Podaj potege: ");
    scanf("%d", &n);
    int wynik = potega(x, n);
    printf("2 do potegi %d wynosi %d\n", n, wynik);

    return 0;
}

int potega(int x, int n){
    int wynik = 1;
    for(n; n > 0; n--)
        {
        wynik = wynik * x;
        }

    return wynik;
}
