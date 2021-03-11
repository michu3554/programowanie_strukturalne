//1.3.9 Napisz program kalkulator, ktory wykonuje wybrana przez u¿ytkownika
//operacje arytmetyczna na dwoch wczytanych liczbach. Program
//powinien wczytywac dane ze standardowego wejscia i wypisywac wynik
//na standardowym wyjsciu.
#include<stdio.h>
int main()
{
float a, b, wynik;
char dzialanie;
printf("Podaj dzialanie, np. 2+2, 4*2 itp. : ");
scanf("%f%c%f", &a, &dzialanie, &b);
switch(dzialanie)
    {
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '*':
            wynik = a * b;
            break;
        case '/':
            wynik = a / b;
            break;
    }
    printf("Wynik to: %f", wynik);
return 0;
}
