#include <stdio.h>
#include <string.h>
int main (){
    int n;
    scanf("%d",&n);
    char str[n];
    printf("Enter the characters : ");
    for(int i = 0; i<=n;i++ ){
        scanf(" %c",&str[i]);
    }
    str[n] = '\0';
    puts(str);












    return 0; 
}