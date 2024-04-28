#include <stdio.h>

void jednosci(int jednosci);
void dziesiatki(int dziesiatki);
void setki(int setki);
void nascie(int dziesiatki, int jednosci);

int s, d, j, liczba;

int main()
{
    printf("Liczba:");
    scanf("%d", &liczba);

    if(liczba<0)
    {
        printf("minus ");
        liczba=liczba*(-1);
        s=liczba/100;
        d=(liczba-s*100)/10;
        j=(liczba-s*100-d*10);
        if(s > 0){
            setki(s);
        }
        if(d > 1){
            dziesiatki(d);
        }
        if(d == 1){
            nascie(d,j);
        }
        if(j > 0 && d > 1){
            jednosci(j);
        }
    }
    else
    {
        s=liczba/100;
        d=(liczba-s*100)/10;
        j=(liczba-s*100-d*10);
        if(s > 0){
            setki(s);
        }
        if(d > 1){
            dziesiatki(d);
        }
        if(d == 1){
            nascie(d,j);
        }
        if(j > 0 && d != 1){
            jednosci(j);
        }
    }

    return 0;
}

void jednosci(int jednosci)
{
    switch(jednosci)
    {
        case 1:
            printf("jeden");
            break;
        case 2:
            printf("dwa");
            break;
        case 3:
            printf("trzy");
            break;
        case 4:
            printf("cztery");
            break;
        case 5:
            printf("pięć");
            break;
        case 6:
            printf("sześć");
            break;
        case 7:
            printf("siedem");
            break;
        case 8:
            printf("osiem");
            break;
        case 9:
            printf("dziewięć");
            break;
    }

}

void dziesiatki(int dziesiatki)
{
    switch(dziesiatki)
    {
        case 2:
            printf("dwadzieścia ");
            break;
        case 3:
            printf("trzydzieści ");
            break;
        case 4:
            printf("czterdzieści ");
            break;
        case 5:
            printf("pięćdziesiąt ");
            break;
        case 6:
            printf("sześćdziesiąt ");
            break;
        case 7:
            printf("siedemdziesiąt ");
            break;
        case 8:
            printf("osiemdziesiąt ");
            break;
        case 9:
            printf("dziewięćdziesiąt ");
            break;
    }

}

void setki(int setki)
{
    switch(setki)
    {
        case 1:
            printf("sto ");
            break;
        case 2:
            printf("dwieście ");
            break;
        case 3:
            printf("trzysta ");
            break;
        case 4:
            printf("czterysta ");
            break;
        case 5:
            printf("pięćset ");
            break;
        case 6:
            printf("sześćset ");
            break;
        case 7:
            printf("siedemset ");
            break;
        case 8:
            printf("osiemset ");
            break;
        case 9:
            printf("dziewięćset ");
            break;
    }

}

void nascie(int dziesiatki, int jednosci)
{
    switch((dziesiatki*10)+jednosci)
    {
        case 11:
            printf("jedenaście ");
            break;
        case 12:
            printf("dwanaście ");
            break;
        case 13:
            printf("trzynaście ");
            break;
        case 14:
            printf("czternaście ");
            break;
        case 15:
            printf("piętnaście ");
            break;
        case 16:
            printf("szesnaście ");
            break;
        case 17:
            printf("siedemnaście ");
            break;
        case 18:
            printf("osiemnaście ");
            break;
        case 19:
            printf("dziewiętnaście ");
            break;
    }
}
