#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int eff[n], fault[n], machine[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &eff[i]);
        machine[i] = i + 1;   // original machine number
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &fault[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(eff[j] < eff[j + 1] ||
              (eff[j] == eff[j + 1] &&
               fault[j] > fault[j + 1]))
            {
                int temp;

                temp = eff[j];
                eff[j] = eff[j + 1];
                eff[j + 1] = temp;

                temp = fault[j];
                fault[j] = fault[j + 1];
                fault[j + 1] = temp;

                temp = machine[j];
                machine[j] = machine[j + 1];
                machine[j + 1] = temp;
            }
        }
    }

    printf("Final Rank Order:\n");

    for(int i = 0; i < n; i++)
    {
        printf("Machine %d\n", machine[i]);
    }

    printf("Machines tied for first rank:\n");

    for(int i = 0; i < n; i++)
    {
        if(eff[i] == eff[0] &&
           fault[i] == fault[0])
        {
            printf("Machine %d\n", machine[i]);
        }
        // else
        // {
        //     break;
        // }
    }

    return 0;
}