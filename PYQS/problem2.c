#include <stdio.h>
int main (){
   int N,K=3;
   scanf("%d ",&N);
   int a[N];
   for(int i =0;i<N;i++){
       scanf("%d",&a[i]);
   }
   int sum,max=0;
   for(int i = 0;i<N;i++){
       for(int j =i+1;j<N;j++){
           for(int k =j+1;k<N;k++){
            sum = a[i]+a[j]+a[k];
            if(max<sum){
                max = sum;
            }
            if(max==sum){
                break;
            }
           }
       }
   }














    return 0;
}