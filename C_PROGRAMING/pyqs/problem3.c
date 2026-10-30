#include <stdio.h>
int main () {
    long long n ;
    printf("Enter the number");
    scanf("%lld",&n);
    int p=0;
    if(n==1){
        printf("there are no prime factor for 1");
    }
    else{
        for(int i = 2; i<=n; i++){
            if(n%i==0){
                int x = 1;
                for(int j = 2;j<i;j++){
                    if(i%j==0){
                        x = 0;
                        break;
                    }
              }
              if(x==1){
               p = i;}
            }
          
        
        
            } }


        printf("%d",p);

    




    return 0;
} 