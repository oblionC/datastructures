#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printf("Primes between m and n: ");
    for(int i = m; i <= n; i++)
    {
        int notPrime = 0;
        for(int j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                notPrime = 1;
                break;
            }
        }
        if(notPrime == 0 && i > 1) printf("%d ", i);
    }
}