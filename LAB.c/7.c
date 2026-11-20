#include <stdio.h>
#include <string.h>
int main () {
    char s[1000];
    scanf("%[^\n]s",s);
    int t = strlen(s);
    int x =0;
    for(int i =0;i<t;i++){
        int p = s[i];
        if((p>=65 && p<=90 )|| (p<=122 && p>=97)){
          s[x] = s[i];
          x++;
        }
    }
    for(int i =0;i<x;i++){
        int p = s[i];
        if(p<95){
            char ch = (char)(p+32);
            s[i] = ch;
        }
    }
     for(int i =0;i<x;i++){
        printf("%c",s[i]);
    }
    int z= 1;
    for(int i =0;i<x/2;i++){
        if(s[i]!=s[x-1-i]){
          z=0;
        }
    }
     if(z){
        printf("sentence is palindrome");
     }
     else printf("No palindrome");
   
    
    return 0;
}