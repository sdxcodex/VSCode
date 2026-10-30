#include<stdio.h>
#include<math.h>
int main ()
{float X,r,where,a,b;
    printf("X is given two individual variable square sum  :");
    scanf("%f",&X);
    printf("Enter the value of a :");
    scanf("%f",&a);
    printf("Enter the value of b :");
    scanf("%f",&b);
    r = sqrt(X);
    printf("The value of r is : %f\n",r);
    where = a*a + b*b - r*r;
    if(where == 0)
    {printf("point is on the circle");}
    else if(where > 0)
    {printf("point is outside the circle");}
    else if(where < 0)
    {printf("point is incide the circle");}
    





    return 0;
}