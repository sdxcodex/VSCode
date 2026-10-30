#include <stdio.h>
#include <string.h>
int main (){
   char str[40];
   puts("Enter the sentence");
   scanf("%[^\n]s",str);
   int size = 0;
   int i = 0;
   while(str[i]!='\0'){
         size++;
         i++;
   }
   printf("%d",size);
   for(int i = 0,j= size -1;i<=j;i++,j--){
       int temp = str[i];
       str[i] = str[j];
       str[j] = temp;

   }
   puts(str);





    return 0;
}