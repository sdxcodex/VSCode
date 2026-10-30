#include<stdio.h>
int main ()
{int a,b;
    printf("Value of column : ");
    scanf("%d",&a);
    printf("Value of column : ");
    scanf("%d",&b);
    for(int i= 1; i <=a;i++)
    {
        for(int j = 1;j<=b;j++)
       { 
        if(i == 1 || j==1 || j==b|| i ==a  )printf("* ");
       else printf("  "); }
    printf("\n");}
    















    return 0;
}