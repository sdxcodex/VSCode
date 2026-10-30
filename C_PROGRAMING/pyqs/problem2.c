#include <stdio.h>
int main (){
    int n ;
    printf("Enetr the value n : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<=n-1; i++){
        scanf("%d",&a[i]);
      
    }
    for(int k = 0;k<=n-1;k++){
        if(a[k]==0){
            a[k] = 1;
        }
        printf("%d",a[k]);
    }
















    return 0;
}