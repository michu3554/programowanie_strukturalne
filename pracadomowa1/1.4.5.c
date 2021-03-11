//1.4.5 Napisz program, ktory wczytuje ze standardowego wejscia nieujemna
//liczbe calkowita n i wypisuje na standardowym wyjsciu sume kwadratow
//liczb od 0 do n, czyli wartosc 0^2 + 1^2 + 3^2 + ... + n^2.
#include <stdio.h>
int main()
{
int n, suma=0, a=0, b;
printf("Podaj wartosc n: ");
scanf("%d", &n);
for(a; a<n; a++)
{
    b = a*a;
    suma +=b;
}
printf("%d", suma);
return 0;
}
