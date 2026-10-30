#include <stdio.h>
#include <string.h>
int main () {
    char a[100];
    scanf("%s",a);
    int u=0,l=0,x;
    int t = strlen(a);
     for(int i =0;i<t;i++){
        x = a[i];
        if(x>=97){
            l++;
        }
        else u++;
     }
     for(int i =0;i<t;i++){
        if(l>=u){
            x=a[i];
           if(x<97){
            x+=32;
            char ch = (char)x;
            printf("%c",ch);
           }
           else {
            printf("%c",a[i]);
           }
        }
           else {
            x = a[i];
            if(x>=96){
                x = x -32;
                char ch = (char)x;
                printf("%c",ch);
           }
           else printf("%c",a[i]);
        }
     }
    return 0;
}