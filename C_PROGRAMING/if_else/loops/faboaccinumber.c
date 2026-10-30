#include <stdio.h>
int main ()
{int n;
    printf("Enter the value n");
    scanf("%d",&n);
    int sum,a,b;
    a = 1;
    b = 0;
    for(int i = 1; i<=n; i++)
    {sum = a+b;
    a=b;
    b=sum;
    printf("The %dst fibonacci number is : %d\n  ",i,sum);}





    return 0;
}