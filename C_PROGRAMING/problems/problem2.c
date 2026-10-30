#include <stdio.h>
int main () {
    int n ;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i = 2 ; i<=n;i++){
        int a = 0;
        for(int j = 2;j<=i-1;j++){
            if(i%j == 0){
            a=1;
             break;
            }
           
        }
        if(a==0){printf("%d ",i);}
    }














    return 0;
}