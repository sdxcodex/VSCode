
#include <stdio.h>

int main()
{
    int n, i, j;
    int seat = 1, replaced = 0;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(seat % 5 == 0)
            {
                printf("0 ");
                replaced++;
            }
            else
            {
                printf("%d ", seat);
            }

            seat++;
        }

        printf("\n");
    }

    printf("Number of labels replaced: %d\n", replaced);
    printf("Final underlying seat number: %d\n", seat - 1);

    return 0;
}
