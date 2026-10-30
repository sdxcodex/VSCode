#include <stdio.h>
#include <string.h>
int main () {
   char s[100],t[100];
   scanf("%s",s);
   scanf("%s",t);
   int a = strlen(s);
   int z = strlen(t);
   int b =0;
   if(a!=z){
    printf("NO");
   }
   else {
   for(int i=0;i<a;i++){
       if(s[i]==t[a-1-i]){
        b=1;
       }
       else {
        b=0;
        break;
       }
   } 
   if(b==1){
    printf("YES");
   }
   else printf("NO");


   }
    return 0;
}