#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    printf("Armstrong Numbers:\n");

    for(int num = l; num <= r; num++)
    {
        int digits = 0;

        // Count digits
        if(num == 0)
        {
            digits = 1;
        }
        else
        {
            int temp = num;

            while(temp > 0)
            {
                digits++;
                temp /= 10;
            }
        }

        int sum = 0;
        int temp = num;

        // Handle 0 separately
        if(num == 0)
        {
            sum = 0;
        }

        while(temp > 0)
        {
            int digit = temp % 10;

            int power = 1;
            for(int i = 1; i <= digits; i++)
            {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if(sum == num)
        {
            printf("%d (%d digits)\n", num, digits);
        }
    }

    return 0;
}