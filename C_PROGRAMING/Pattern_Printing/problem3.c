#include <stdio.h>
int main  ()
{int n;
    printf("Number of rows : ");
    scanf("%d",&n);
    int str = n;
    int spc = 1;
   
    for(int j = 1 ; j<=n+1;j++){
            printf("%d ",j);
            }
    for(int k = n ; k>0;k--){
        printf("%d ",k);

    }  
    printf("\n");
    for(int i=1;i<=n;i++){

    for(int j = 1; j<=str;j++){
        printf("%d ",j);
    }
    for(int k = 1;k<=spc;k++){
        printf("  ");
    }
    for(int l=str;l>0;l--)
    {printf("%d ",l);}
    printf("\n");
    str--;
    spc+=2;


    }


    return 0;

}