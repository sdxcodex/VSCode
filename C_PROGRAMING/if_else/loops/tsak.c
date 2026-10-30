#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 2; i<= n;i++)
    {
        int a = 1;
        for(int j= 2 ; j<=i-1 ;j++ )
        {if(i%j==0)
        {
            a = 0;
            break;
        }}
        if(a==1)
        {
            printf("%d ",i);
        }
    }

    return 0;
}