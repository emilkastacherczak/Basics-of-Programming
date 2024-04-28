#include <stdio.h>

int main()
{
    int n, m;
    printf("N:");
    scanf("%d", &n);
    printf("M:");
    scanf("%d", &m);
    int tab[n][m];
    int N=n-1;
    int M=m-1;
    int liczba=1;
    int i, j;

    for(i=0; ; i++, N--, M--)
    {
        if(liczba<=n*m)
        {
            for (j=i; j<=M; j++, liczba++)
            {
                tab[i][j] = liczba;
            }
        }else
            goto koniec;
        if(liczba<=n*m)
        {
            for (j=i+1; j<=N; j++, liczba++)
            {
                tab[j][M] = liczba;
            }
        }else
            goto koniec;
        if(liczba<=n*m)
        {
            for (j=M-1; j>=i; j--, liczba++)
            {
                tab[N][j] = liczba;
            }
        }else
            goto koniec;
        if(liczba<=n*m)
        {
            for (j=N-1; j>i; j--, liczba++)
            {
                tab[j][i] = liczba;
            }
        }else
            goto koniec;
    }

    koniec:
    for(int k=0; k<n; k++)
    {
        for(int l=0; l<m; l++){
            printf("%6d", tab[k][l]);
        }
        printf("\n");
    }
    return 0;
}
