#include <stdio.h>

long long int silnia(int n);

int main()
{
    int N;
    printf("N:");
    scanf("%d", &N);

    if(N<0){
        printf("N musi być nieujemne");
    }
    else{
        printf("Silnia = %lld", silnia(N));
    }

    return 0;
}

long long int silnia(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return n*silnia(n-1);
    }
}
