#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int distinct = 0;

    printf("Prime Factors: ");

    for(int i = 2; i * i <= n; i++)
    {
        int found = 0;

        while(n % i == 0)
        {
            printf("%d ", i);
            n /= i;
            found = 1;
        }

        if(found)
        {
            distinct++;
        }
    }

    if(n > 1)
    {
        printf("%d ", n);
        distinct++;
    }

    printf("\nDistinct Prime Factors = %d", distinct);

    return 0;
}






#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int distinct = 0;

    printf("Prime Factors: ");
    int p =n;
    for(int i = 2; i <= n; i++)
    {    int x =0;
        int found = 0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                x=1;
            }
        }
    if(x!=1){   
        while(p % i == 0)
        {
            printf("%d ", i);
            p /= i;
            found = 1;
        }
    }
    

        if(found)
        {
            distinct++;
        }
    }

    // if(n > 1)
    // {
    //     printf("%d ", n);
    //     distinct++;
    // }

    printf("\nDistinct Prime Factors = %d", distinct);

    return 0;
}

