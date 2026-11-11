#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int power = 0;
    int value = 1;

    while(value < n)
    {
        value *= 2;
        power++;
    }

    if(value == n)
        printf("%d %d", power, power + 1);
    else
        printf("%d %d", power - 1, power);

    return 0;
}