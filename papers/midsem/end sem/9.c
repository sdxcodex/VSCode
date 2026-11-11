#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int spa = n-1;
    for(int i =0;i<n;i++){
        int p =i;
        for(int j = spa;j>0;j--){
            printf(" ");
        }
        spa--;
        for(int j =0;j<=i;j++){
            printf("%d",p);
            p--;
        }
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}