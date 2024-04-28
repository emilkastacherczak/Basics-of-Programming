#include <stdio.h>

long long int fib(int n)
{
    if(n<=2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int N;
    printf("N:");
    scanf("%d", &N);

    printf("fib(%d) = %lld", N, fib(N));

    return 0;
}
