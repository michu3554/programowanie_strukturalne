//1.3.3 Napisz program, który wczytuje ze standardowego wejscia trzy liczby
//calkowite i wypisuje na standardowym wyjsciu najwieksza z ich wartosci
//(pamietaj o przypadku gdy wszystkie podane liczby lub dwie
//z nich sa równe).
#include<stdio.h>
int main()
{
int a, b, c;
printf("Wpisz pierwsza liczbe: \n");
scanf("%d", &a);
printf("Wpisz druga liczbe: \n");
scanf("%d", &b);
printf("Wpisz trzecia liczbe: \n");
scanf("%d", &c);
if(a>b && a>c)
    {
    printf("Najwieksza liczba to: %2d\n", a);
    }
if(b>a && b>c)
    {
    printf("Najwieksza liczba to: %2d\n", b);
    }
if(c>a && c>b)
    {
    printf("Najwieksza liczba to: %2d\n", c);
    }
if(a==b && b==c)
    {
    printf("Najwieksza liczba to: %2d\n", a);
    }
if(a==b && a>c)
    {
    printf("Najwieksza liczba to: %2d\n", a);
    }
if(b==c && b>a)
    {
    printf("Najwieksza liczba to: %2d\n", b);
    }
if(a==c && a>b)
    {
    printf("Najwieksza liczba to: %2d\n", a);
    }
return 0;
}
