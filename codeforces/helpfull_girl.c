#include <stdio.h>
#include <string.h>
int main () {
    char s[100];
    scanf("%s",s);
    int t = strlen(s);
    for(int i =0;i<t;i+=2){
        for(int j = i+2;j<t;j+=2){
            if(s[i]>s[j]){
                int temp = s[i];
                s[i] = s[j];
                s[j] =temp;
            }
        }
    }
    printf("%s",s);

    return 0;
}