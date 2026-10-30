#include <stdio.h>
int main () {
    int M,N;
    scanf("%d %d",&M,&N);
    int a[M][N];
    float p=(M*N)/2;
    if(p!=M*N/2){
        printf("1\n");
    }
    else printf("0\n");
    printf("%d",M*N/2);











    return 0;
}