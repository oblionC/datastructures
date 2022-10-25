#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int notPrime = 0;
    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            notPrime = 1;
            break;
        }
    }
    if(notPrime == 1 || n == 1 || n == 0) printf("%d is not prime.", n);
    else printf("%d is prime.", n);
}