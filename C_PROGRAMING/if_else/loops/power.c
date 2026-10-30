#include <stdio.h>
int main ()
{int a,n;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter the power");
    scanf("%d",&n);
    int power = 1;
    for(int i = 1;i<=n;i++)
{    
    power = power*a;
}printf("Value is %d\n",power);








    return 0;
}