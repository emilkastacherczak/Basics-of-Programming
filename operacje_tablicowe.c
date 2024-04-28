#include <stdio.h>
#include <stdlib.h>

void wypelnij( int *tab, int n, int zakres, int Z);
void wypisz(int *tab, int n);
int max(int *tab, int n);
int min(int *tab, int n);
int suma(int *tab, int n);
int czy_pierwsza(int a);
int liczby_pierwsze(int *tab, int n, int *pierwsze);
void kwadrat(int *tab, int n, int zakres);
void szescian(int *tab, int n, int zakres);
int silnia(int a);
int fib(int liczba);
int czy_fib(int a);

int main()
{
    int Z, N, zakres, i=0;
    printf("Ziarno:");
    scanf("%d", &Z);
    printf("N:");
    scanf("%d", &N);
    printf("Zakres:");
    scanf("%d", &zakres);
    int *tab;
    tab=(int*) malloc(N*sizeof(int));

    wypelnij(tab, N, zakres, Z);
    wypisz(tab, N);
    printf("\nMaksimum: %d", max(tab, N));
    printf("\nMinimum: %d", min(tab, N));
    printf("\nSuma: %d", suma(tab, N));

    int *pierwsze;
    pierwsze=(int*) malloc(N*sizeof(int));

    printf("\nLiczby pierwsze: ");
    liczby_pierwsze(tab, N, pierwsze);

    printf("\nKwadraty liczb: ");
    kwadrat(tab, N, zakres);
    printf("\nSześciany liczb: ");
    szescian(tab, N, zakres);

    printf("\nSilnie liczb: ");
    for(i=0;i<N;i++){
        silnia(tab[i]);
    }

    printf("\nLiczb z ciągu Fibonacciego: ");
    for(i=0;i<N;i++){
        czy_fib(tab[i]);
    }

    free(tab);
    return 0;
}

void wypelnij(int *tab, int n, int zakres, int Z){
    srand(Z);
    int i;
    for(i=0;i<n;i++){
        tab[i]=rand()%zakres+1;
    }
}

void wypisz(int *tab, int n){
    printf("[");
    int i;
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d]", tab[i]);
        }
        else{
            printf("%d, ", tab[i]);
        }
    }
}

int max(int *tab, int n){
    int i, j;
    int max=tab[0];
    for(i=1;i<n;i++){
        if(max<tab[i])
            max=tab[i];
    }
    return max;
}

int min(int *tab, int n){
    int i, j;
    int min=tab[0];
    for(i=1;i<n;i++){
        if(min>tab[i])
            min=tab[i];
    }
    return min;
}

int suma(int *tab, int n){
    int i, suma=0;
    for(i=0;i<n;i++){
        suma=suma+tab[i];
    }
    return suma;
}

int czy_pierwsza(int a){
    if (a<2) {
        return 0;
    }
    for (int i=2; i*i<=a; i++){
        if (a%i==0){
            return 0;
        }
    }
    return 1;
}

int liczby_pierwsze(int *tab, int n, int *pierwsze){
    int wynik=0;
    for (int i=0;i<n;i++){
        if (czy_pierwsza(tab[i])){
            pierwsze[wynik]=tab[i];
            wynik++;
        }
    }
    for(int i=0;i<wynik;i++){
        printf("%d, ", pierwsze[i]);
    }
    return wynik;

}

void kwadrat(int *tab, int n, int zakres){
    int i, j;
    for(j=0;j<n;j++){
        for(i=0;i*i<=zakres;i++){
            if(tab[j]==i*i){
                printf("%d, ", tab[j]);
            }
        }
    }
}

void szescian(int *tab, int n, int zakres){
    int i, j;
    for(j=0;j<n;j++){
        for(i=0;i*i*i<=zakres;i++){
            if(tab[j]==i*i*i){
                printf("%d, ", tab[j]);
            }
        }
    }
}

int silnia(int a){
    int i;
    long long wynik=1;
    for(i=1;i<=a;i++){
        wynik=wynik*i;
        if(wynik==a){
            printf("%d, ", a);
        }
    }

    return 0;
}

int fib(int liczba){
    int an, an_1=1, an_2=1;
    {
        do {
            an = an_1 + an_2;
            an_2 = an_1;
            an_1 = an;
        }
        while(an_1<=liczba);
    }
    return an;
}

int czy_fib(int a){
    for(int i=0;i<=a;i++){
        if(fib(i)==a){
            printf("%d, ", a);
            break;
        }
    }
}
