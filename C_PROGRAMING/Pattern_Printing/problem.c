#include <stdio.h>
int main  ()
{int n;
    printf("Number of rows : ");
    scanf("%d",&n);
    int a = n-1;
    for(int i =1; i<=n; i++){
        int b = 63+i;
        for(int j = 1;j<=a;j++){
        printf("  ");
    }
    a--;
    int c = 65;
    for(int k = 1; k<=i;k++)
    {   char ch = (char)c;
        printf("%c ",ch);
        c++;
    }
    for(int l = 1; l<=i-1;l++)
    {   char d = (char)b;
        printf("%c ",d);
        b--;
    }

    printf("\n");
}









    return 0;
}