#include <stdio.h>
int main (){
int n;
    scanf("%d",&n);
    int X = 0;
    while(n--){
        char str[4] ;
        scanf("%s",str);
        if(str[0]== '+' ||  str[1] == '+'){
            X++;
        }
        else X--;

    }
    printf("%d",X);






    return 0;
}