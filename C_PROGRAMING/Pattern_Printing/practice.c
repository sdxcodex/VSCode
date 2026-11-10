#include <stdio.h>
int main ()
{int n;
    int x =1;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {for(int k =1 ; k<=n-i;k++)
        {printf("  ");}
    int a = 65;
    for(int j = 1; j<=x;j++)
        {
        char ch = (char)a;    
        printf("%c ",ch);
        a++;
}x+=2;
        
        printf("\n");





    }


















    return 0;
}