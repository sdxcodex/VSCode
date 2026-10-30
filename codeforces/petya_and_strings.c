#include <stdio.h>
#include <string.h>
int main () {
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int z = strlen(a);
    int e =1;
    for(int i =0;i<z;i++){
        int c = a[i];
        int d = b[i];
        if(c<95) c+=32;
        if(d<95) d+=32;
        if(c<d) {
            printf("-1");
            e=0;
            break;
        }
        else if(d<c){
            printf("1");
            e=0;
            break;
        }
            }
    if(e==1){
        printf("0");
    }
    







    return 0;
}