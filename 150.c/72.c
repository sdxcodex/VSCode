#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        printf("Inventory Empty");
        return 0;
    }

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int id;
    scanf("%d", &id);

    int pos = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == id)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
    {
        for(int i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }

    printf("Size = %d\n", n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}