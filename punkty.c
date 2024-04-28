#include <stdio.h>
#include <math.h>

typedef struct{
    char nazwa;
    int x;
    int y;
    int z;
}Punkt;

void wypisz(const Punkt p);
float odleglosc(const Punkt *p1, const Punkt *p2);

int main()
{
    int N;
    printf("N:");
    scanf("%d ", &N);

    Punkt tab[100];

    for (int i=0; i<N; i++){
        //printf("Podaj nazwę punktu i współrzędne:");
        scanf(" %c %d %d %d", &tab[i].nazwa, &tab[i].x, &tab[i].y, &tab[i].z);
    }   //zapisanie punktów

    printf("Punkty:\n");
    for(int i=0; i<N; i++){
        wypisz(tab[i]);
    }

    printf("Odległości:\n");
    for(int i=0; i<N*(N-1)/2;i++){
        for(int j=i+1; j<N ;j++){
            printf("%c - %c: %.3f\n", tab[i].nazwa, tab[j].nazwa, odleglosc(&tab[i], &tab[j]));
        }
    }
    return 0;
}

void wypisz(const Punkt p){
    printf("%c = [%d, %d, %d]\n", p.nazwa, p.x, p.y, p.z);
}

float odleglosc(const Punkt *p1, const Punkt *p2){
    float wynik;
    wynik = sqrt( pow( p2->x - p1->x, 2) + pow( p2->y - p1->y, 2) + pow( p2->z - p1->z, 2));
    return wynik;
}
