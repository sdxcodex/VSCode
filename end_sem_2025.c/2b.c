#include <stdio.h>
int main () {
    char x;
    scanf("%c",&x);
    int m=0,n=0;
    switch(x=='t'){
        case 1 : m++;
                break;
        default: n+=2;

    }
    printf("%d %d",m,n);
    return 0;
}