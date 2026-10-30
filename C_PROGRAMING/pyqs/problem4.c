#include <stdio.h>
int main (){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
 
    for(int i = 1; i<=n ; i++){
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        for (int  k = 1;k<=2*(n-i)+1;k++){
            printf(" "); 
        }
       
        int a = i;
        for(int l = 1; l<=i;l++){
            printf("%d",a);
            a--;

        }
        
        
        printf("\n");   
    }
    for(int k = 1;k<=n+1;k++){
        printf("%d",k);
    }
    for(int l = n; l>0;l--){
        printf("%d",l);
    }
    return 0;
}