#include <stdio.h>
int main  ()
{int a;
    printf("Number of rows : ");
    scanf("%d",&a);
    for(int i =1; i<=a; i=i+1){
        for(int j = 1; j<=2*a-1; j=j+2)
       { printf("%d ",j);}
       printf("\n");
    }













    return 0;
}