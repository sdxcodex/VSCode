
#include <stdio.h>

int main()
{
    int n, m, i = 0, j = 0;

    printf("Enter sizes of two warehouses: ");
    scanf("%d %d", &n, &m);

    int a[n], b[m];

    printf("Enter first sorted array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second sorted array:\n");
    for(j = 0; j < m; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    printf("\nUnion: ");
    int x = 0, y = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            printf("%d ", a[i]);
            i++;
        }
        else if(a[i] > b[j])
        {
            printf("%d ", b[j]);
            j++;
        }
        else
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }

    while(i < n)
        printf("%d ", a[i++]);

    while(j < m)
        printf("%d ", b[j++]);

    i = 0;
    j = 0;

    printf("\nIntersection: ");

    while(i < n && j < m)
    {
        if(a[i] < b[j])
            i++;
        else if(a[i] > b[j])
            j++;
        else
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }

    i = 0;
    j = 0;

    printf("\nExclusive to warehouse 1: ");

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            printf("%d ", a[i]);
            i++;
        }
        else if(a[i] > b[j])
            j++;
        else
        {
            i++;
            j++;
        }
    }

    while(i < n)
        printf("%d ", a[i++]);

    i = 0;
    j = 0;

    printf("\nExclusive to warehouse 2: ");

    while(i < n && j < m)
    {
        if(b[j] < a[i])
        {
            printf("%d ", b[j]);
            j++;
        }
        else if(b[j] > a[i])
            i++;
        else
        {
            i++;
            j++;
        }
    }

    while(j < m)
        printf("%d ", b[j++]);

    return 0;
}
