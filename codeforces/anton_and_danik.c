#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int s1=0,s2=0;
    for(int i =0;i<n;i++){
        if(a[i] == 'A'){
            s1++;
        }
        else if(a[i] == 'D') s2++;
    }
    if(s1>s2){
        printf("Anton");
    }
    else if(s2>s1){
        printf("Danik");
    }
    else printf("Friendship");











    return 0;
}