#include <stdio.h>
int main  ()
{int n;
    printf("Number of rows : ");
    scanf("%d",&n);
    int str = n;
    int spc = 1;
    for(int i = 1; i<=n ;i++){
        for(int j = 1; j <= str;j++){
            printf("*");
        }
        printf("\n");
        for(int k=1 ; k<=spc;k++){
            printf(" ");
        }
        
        spc++;
        str--;
    }

    return 0;
}
    