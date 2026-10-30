#include <stdio.h>
int main (){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int spa = 2*n-2;
    for(int i = 1; i<=n ; i++){
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        for (int  k = spa;k>0;k--){
            printf(" "); 
        }
        spa-=2;
        int a = i;
        for(int l = 1; l<=i;l++){
            printf("%d",a);
            a--;

        }
        
        
        printf("\n");
            
        
        
    }
    return 0;
}