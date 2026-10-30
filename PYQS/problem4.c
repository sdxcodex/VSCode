#include <stdio.h>
int main () {
   int n;
   scanf("%d",&n);
   int a[n][n];
   for(int i =0;i<n;i++){
       for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]); 
       }
       int z=0;
       int b=n/2;
       if(i%2!=0){
        for(int k =0;k<=b;k++){
            int temp = a[i][z];
            a[i][z] = a[i][n-z-1];
            a[i][n-z-1] = temp;
        z++;
        }
       }
   }
   for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        printf("%d",&a[i][j]);
    }
    printf("\n");
   }
   int sum =0;
   for(int i =0;i<n;i++){
       for(int j = 0;j<n;j++){
           if(i+j==n-1 || i==j){
            sum+=a[i][j];
           }
       }
   }
   printf("%d",sum);


    return 0;
}