#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int dzien;
    int miesiac;
    int rok;
}Data;

typedef struct {
    char imie[20];
    char nazwisko[20];
    int wiek;
    int waga;
    Data dataurodzenia;
}Osoba;

int main()
{
    int licznik;
    Osoba *wsk_os[10];
    for(int i = 0; i < 10; i++){
        wsk_os[i] = NULL;
    }   //pusta tablica wsk na osoby

    int wybor;
    printf("1. Dodaj\n2. Usuń\n3. Wypisz\n0. Zakończ\n");

    do
    {
        poczatek:
        printf("Wybór:\n");
        scanf("%d", &wybor);
        if(wybor > 3 || wybor < 0){
            printf("Nieprawidłowy wybór");
        }else if (wybor == 1){
            licznik=0;
            for(int i=0;i<10;i++){
                if (wsk_os[i] == NULL){
                    licznik++;
                }
            }
            if(licznik==0){
                printf("Brak wolnych miejsc w tablicy\n");
                goto poczatek;
            }
            else{
                for(int i = 0; i < 10; i++){
                    if(wsk_os[i] == NULL)
                    {
                        wsk_os[i] = (Osoba *) malloc(sizeof(Osoba)); //miejsce w pamieci na pojedyncza osobe

                        printf("Imię:");
                        scanf("%s", wsk_os[i]->imie);
                        printf("Nazwisko:");
                        scanf("%s", wsk_os[i]->nazwisko);
                        printf("Waga:");
                        scanf("%d", &wsk_os[i]->waga);  //potrzebny & - waga nie jest tablica
                        printf("Data ur.:");
                        scanf("%d-%d-%d", &wsk_os[i]->dataurodzenia.rok, &(wsk_os[i]->dataurodzenia.miesiac),
                              &(wsk_os[i]->dataurodzenia.dzien));
                        wsk_os[i]->wiek = (2022 - (wsk_os[i]->dataurodzenia.rok));  //obliczenie i zapisanie wieku
                        break;
                    }
                }
            }
        }else if(wybor == 2){
            int index;
            printf("Podaj index:");
            scanf("%d", &index);
            if(index>=10 || index<0){
                printf("Indeks poza zakresem tablicy\n");
            }
            else if(wsk_os[index]==NULL){
                printf("Brak osoby pod wskazanym indeksem\n");
            }
            else{
                free(wsk_os[index]);
                wsk_os[index]=NULL;
            }
        }else if (wybor == 3){
            for(int i=0; i<10; i++)
            {
                if(wsk_os[i]==NULL){
                    printf("[%d] Wolne\n", i);
                }
                else{
                    printf("[%d] %s %s, %d kg, %d lat, ur. %d-%02d-%02d\n",
                           i,
                           wsk_os[i]->imie,
                           wsk_os[i]->nazwisko,
                           wsk_os[i]->waga,
                           wsk_os[i]->wiek,
                           wsk_os[i]->dataurodzenia.rok,
                           wsk_os[i]->dataurodzenia.miesiac,
                           wsk_os[i]->dataurodzenia.dzien);
                }
            }
        }
    }while(wybor != 0);
    return 0;
}
