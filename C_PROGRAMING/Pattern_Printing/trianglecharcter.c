#include <stdio.h>
int main ()
{int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n-i;j++)
        {printf("  ");}
        int a = 65;
        for(int k = 1 ; k <=i; k++)
         
        {
         char ch = (char)a;
        printf("%c ",ch);
        a++;
        }
        printf("\n");





    }


















    return 0;
}