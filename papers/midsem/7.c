#include <stdio.h>
int main () {
    int n=7;
    int min =0;
    for(int i =1;i<=7;i++){

        for(int j =1;j<=7;j++){
            int a = i;
            if(a>4)a=n+1-a;
            int b =j;
            if(b>4)b = n+1-b;
            if(a>b)min = b;
            else min = a;
            printf("%d ",5-min);
        }
        printf("\n");
    }






    return 0;
}