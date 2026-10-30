#include <stdio.h>
#include<string.h>
int main () {
    int n;
    scanf("%d",&n);
    while(n--){
    char str[100];
    scanf("%s",&str);
    int count =0;
    int i  = 1;
    while(str[i]!=0){
        count++;
        i++;
    }
    if(count+1>10)
    printf("%c%d%c\n",str[0],count-1,str[count]);
    else printf("%s\n",str);    
}


    return 0;
}