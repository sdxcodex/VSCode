#include <stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid Input");
        return 0;
    }

    int g = gcd(a, b);
    g = gcd(g, c);

    printf("Maximum Packages = %d\n", g);
    printf("Components per Package:\n");
    printf("Type 1 = %d\n", a / g);
    printf("Type 2 = %d\n", b / g);
    printf("Type 3 = %d\n", c / g);

    return 0;
}