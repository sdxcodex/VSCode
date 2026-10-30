#include<stdio.h>
int main ()
{int x1,x2,x3,y1,y2,y3;
    printf("Enter the x1 : ");
    scanf("%d",&x1);
    printf("Enter the x2 : ");
    scanf("%d",&x2);
    printf("Enter the x3 : ");
    scanf("%d",&x3);
    printf("Enter the y1 : ");
    scanf("%d",&y1);
    printf("Enter the y2 : ");
    scanf("%d",&y2);
    printf("Enter the y3 : ");
    scanf("%d",&y3);
    if ((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2))
    {printf("Points lies in one line ");}    
    else{printf("Points not lies in one line");}


    return 0;
}