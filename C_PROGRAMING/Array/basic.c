#include <stdio.h>
int main ()
{
    int a[3] ;
    int sum = 1;
    for(int i =0 ; i <=2; i++){
        scanf("%d",&a[i]);
        sum = sum *a[i];
    }
    printf("%d",sum);
return 0;
}