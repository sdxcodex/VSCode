#include <stdio.h>
int main  ()
{int n;
    printf("Number of rows : ");
    scanf("%d",&n);
    for(int i =1; i<=n; i=i+1){
        int a=1;
        for(int j = 1; j<=i; j=j+1)
       { printf("%d ",a);
    a = a+ 2;}
       printf("\n");
    }













    return 0;
}