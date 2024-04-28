#include <stdio.h>

float dodaj(float a, float b);
float odejmij(float a, float b);
float pomnoz(float a, float b);
float podziel(float a, float b);

float liczba1,liczba2;
char operator;

int main()
{
    printf(" Działanie:");
    scanf("%f %c %f", &liczba1, &operator, &liczba2);

    if(operator == '+')
    {
        printf("Wynik: %.6f", dodaj(liczba1,liczba2));
    }
    else if(operator == '-')
    {
        printf("Wynik: %.6f", odejmij(liczba1,liczba2));
    }
    else if(operator == '*')
    {
        printf("Wynik: %.6f", pomnoz(liczba1,liczba2));
    }
    else if(operator == '/')
    {
        printf("Wynik: %.6f", podziel(liczba1,liczba2));
    }
    else
    {
        printf(" Nieprawidłowe działanie");
    }

    return 0;
}



float dodaj(float a, float b)
{
    return a+b;
}

float odejmij(float a, float b)
{
    return a-b;
}

float pomnoz(float a, float b)
{
    return a*b;
}

float podziel(float a, float b)
{
    return a/b;
}