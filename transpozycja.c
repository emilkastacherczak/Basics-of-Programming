#include <stdio.h>

void tabA(int N, int M);

int main()
{
    int N, M;
    printf("N:");
    scanf("%d", &N);
    printf("M:");
    scanf("%d", &M);
    printf("A:\n");
    tabA(N,M);

    return 0;
}

void tabA( int N, int M)
{
    int tab[N][M];
    int a=1, i, j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            tab[i][j]=a;
            printf("%d\t", tab[i][j]);
            a=a+1;
        }
        printf("\n");
    }
    printf("B:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t", tab[j][i]);
        }
        printf("\n");
    }
}