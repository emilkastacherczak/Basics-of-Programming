#include <stdio.h>

int main()
{
    char tekst[100];
    int wybor, i;
    int roznica = 'a' - 'A';

    printf("Tekst:");
    fgets(tekst, sizeof(tekst), stdin);
    printf("Konwersja:\n");
    printf("1. małe:\n");
    printf("2. WIELKIE:\n");
    printf("3. Tytułowe:\n");
    printf("Wybór:");
    scanf("%d", &wybor);

    if(wybor==1)
    {
        for(i=0;;)
        {
            do
            {
                if(tekst[i] < 90){
                    printf("%c", tekst[i] + roznica);
                    i++;
                }else{
                    printf("%c", tekst[i]);
                    i++;
                }
            }while(tekst[i]!=0);
            break;
        }
    }

    if(wybor==2)
    {
        for(i=0;;)
        {
            do
            {
                if(tekst[i] > 90){
                    printf("%c", tekst[i] - roznica);
                    i++;
                }else{
                    printf("%c", tekst[i]);
                    i++;
                }
            }while(tekst[i]!=0);
            break;
        }
    }

    if(wybor==3)
    {
        for(i=0;;)
        {
            do
            {
                if(tekst[i]==32){
                    i = i + 1;
                    printf(" %c", tekst[i] - roznica);
                    i++;
                }else{
                    printf("%c", tekst[i]);
                    i++;
                }
            }while(tekst[i]!=0);
            break;
        }
    }
    return 0;
}
