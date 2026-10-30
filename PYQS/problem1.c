#include <stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int a[N],p=0;
    int spa=0;
    for(int i = 1;i<=N;i++){
        for(int j=1;j<=spa;j++){
            printf(" ");
        }
        // int a=N+1-i;
        for(int k=N+1-i;k>0;k=k-2){
            printf("%d   ",k);
            if(i==N){
              a[p]=k;
              p++;
            }
        }
        spa++;
        printf("\n");
    }
    int x=N-1;
    for(int i = 1;i<=N;i++){
        for(int j=1;j<=spa;j++){
            printf(" ");
        }
        for(int k=i;k>0;k=k-2)
        {
            printf("%d   ",k);
        }
        spa--;
        printf("\n");
    }   
    int sum =0;
    for(int i=0;i<p;i++){
        sum+=a[i];
    }
    printf("%d\n",sum);
    if(N%2==0){
        printf("sum as well as all integers in final levaa is even ");
    }
    else printf("sum as well as all integers in final level is odd");
    return 0;
}