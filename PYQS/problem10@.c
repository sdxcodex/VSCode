#include <stdio.h>

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int primeSum = 0, nonPrimeSum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(isPrime(i))
            primeSum += a[i];
        else
            nonPrimeSum += a[i];
    }

    printf("%d", nonPrimeSum - primeSum);

    return 0;
}