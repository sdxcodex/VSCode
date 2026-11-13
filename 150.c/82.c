#include <stdio.h>

int palindrome(int n)
{
    int temp = n;
    int rev = 0;

    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return rev == n;
}

int digitSum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    int count = 0;
    int largest = -1;

    printf("Qualifying labels:\n");

    for(int i = A; i <= B; i++)
    {
        int sum = digitSum(i);

        if(sum != 0 &&
           palindrome(i) &&
           i % sum == 0)
        {
            printf("%d ", i);
            count++;
            largest = i;
        }
    }

    printf("\n");

    if(count == 0)
    {
        printf("No labels qualify.\n");
    }
    else
    {
        printf("Total Count = %d\n", count);
        printf("Largest Qualifying Label = %d\n", largest);
    }

    return 0;
}