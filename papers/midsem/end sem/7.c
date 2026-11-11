#include <stdio.h>
#include <string.h>
int main () {
    char a[50];
    scanf("%s",a);
    int t = strlen(a);
    int x =0,p =0;
    for(int i =0;i<t;i++){
        
        if(a[i]=='@'){
        x++;
        p = i;
        }
       
    }
if(x==1 && p>0 && p<t-1){
    printf("Valid");
}
else printf("Invalid");




    return 0;
}