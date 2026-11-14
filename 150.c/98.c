#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int count = 0;

    for(int n = A; n <= B; n++)
    {
        if(n <= 0)
            continue;

        int sum = 0;

        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                sum += i;
            }
        }

        if(sum == n)
        {
            printf("Perfect Number = %d, Divisor Sum = %d\n", n, sum);
            count++;
        }
    }

    printf("Total Perfect Numbers = %d", count);

    return 0;
}