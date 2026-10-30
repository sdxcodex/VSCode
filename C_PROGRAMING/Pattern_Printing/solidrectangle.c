#include<stdio.h>
int main ()
{int a,b;
    printf("Number of rows : ");
    scanf("%d",&a);
    printf("Number of column : ");
    scanf("%d",&b);
    for(int i =1; i<=a; i++){
        for(int i = 1; i<=b; i++)
       { printf("* ");}
       printf("\n");
    }









    return 0;
}