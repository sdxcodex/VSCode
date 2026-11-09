#include <stdio.h>

void printEvenReverse(int a[], int n, int i)
{
    if(i >= n)
        return;

    printEvenReverse(a, n, i + 2);
    printf("%d ", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printEvenReverse(a, n, 0);

    return 0;
}