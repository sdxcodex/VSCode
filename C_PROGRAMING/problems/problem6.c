#include <stdio.h>
int main () {
    int a,n,x=1 ;
    printf("Enter the value of n");
    scanf("%d %d",&a,&n);
    for(int i = 1;i<=n;i++){
       x=a*x;
    }
    printf("value is %d",x);







    return 0;
}
    
    