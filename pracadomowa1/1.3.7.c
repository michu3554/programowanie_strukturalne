//1.3.7 Napisz program, ktory wczytuje ze standardowego wejscia wspolczynniki
//rownania kwadratowego z jedna niewiadoma i wypisuje na standardowym
//wyjsciu wszystkie rozwiazania rzeczywiste tego rownania
//lub odpowiednia informacje w przypadku braku rozwi¹zan.
#include <stdio.h>
#include <math.h>

int main()
{
float a, b, c, delta;
printf("Podaj wspolczynnik a: ");
scanf("%f",&a);
printf("Podaj wspolczynnik b: ");
scanf("%f",&b);
printf("Podaj wspolczynnik c: ");
scanf("%f",&c);
delta =(b*b)-(4*a*c);
if(a==0)
    {
    printf("to nie rownanie kwadratowe");
    }
else
    {

    if(delta>0)
        {
        printf("x1 wynosi: %2f\n",(-b-delta)/(2*a));
        printf("x2 wynosi: %2f\n",(-b+delta)/(2*a));
        }
    else
    {
        if(delta == 0)
            {
            printf("Jedno rozwiazanie x: %2f\n",-b/(2*a));
            }
        else
            {
            if(delta < 0)
            {
            printf("brak rozwiazan");
            }
        }
    }
}

return 0;
}
