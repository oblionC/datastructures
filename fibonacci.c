#include <stdio.h>

int fib(int n)
{
    if(n == 1 || n == 2) return 1;
    else if(n > 2) return fib(n - 1) + fib(n - 2);
    else return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}