
#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum, steps = 0;
    int seen[101];
    int i, repeated = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Sequence: ");

    while(steps < 100)
    {
        // Check whether number is already seen
        for(i = 0; i < steps; i++)
        {
            if(seen[i] == num)
            {
                repeated = 1;
                break;
            }
        }

        if(repeated)
        {
            printf("\nStopping condition: Repeated value %d\n", num);
            return 0;
        }

        // Store current number
        seen[steps] = num;

        printf("%d ", num);

        if(num == 1)
        {
            printf("\nStopping condition: Reached 1\n");
            return 0;
        }

        // Calculate sum of squares of digits
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit;
            temp = temp / 10;
        }

        num = sum;
        steps++;
    }

    printf("\nStopping condition: Reached 100 steps\n");

    return 0;
}
