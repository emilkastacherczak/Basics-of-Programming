#include <stdio.h>
#include <math.h>

float fun(float fa, float fb, float a, float b, int n, int tab[]);

int main()
{
    float a, b, fa=0.0f, fb=0.0f;
    int i, n;
    int tab[100];
    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("n:");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        printf("x%d:", i);
        scanf("%d", &tab[i]);
    }
    for(i=0;i<=n;i++){
        fa = fa + tab[i]*pow(a, i);
        fb = fb + tab[i]*pow(b, i);
    }
    if(fa*fb>0){
        printf("Brak miejsca zerowego w zadanym przedziale");
    }
    else{
        double wynik;
        wynik = fun(fa, fb, a, b, n, tab);
        printf("Miejsce zerowe: %.3lf", wynik);
    }
    return 0;
}

float fun(float fa, float fb, float a, float b, int n, int tab[])
{
    float x=(a+b)/2;   //wyznaczam x1 w przedziale a, b
    float fx=0.0f;
    int i;

    for(i=0;i<=n;i++){   //wyliczam f(x1)
        fx = fx + tab[i]*pow(x, i);
    }
    if(fabs(fx)<=0.001){
        return x;   //gdy f(x1) jest m.zer
    }

    else if(fx*fa<0){
        b=x;
        fun(fa, fb, a, b, n, tab);
    }
    else if(fx*fb<0){
        a=x;
        fun(fa, fb, a, b, n, tab);
    }
}
