#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int t = strlen(s);
    int a=0;
    for(int i =t-1;i>=t/2;i--){
        char temp = s[a];
        s[a] = s[i];
        s[i]=temp;
        a++;
    }
    printf("%s",s);



    return 0;
}