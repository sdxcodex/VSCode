#include <stdio.h>
int main (){

    int a[8];
    for(int i = 0;i<=7;i++){

        scanf("%d",&a[i]);
    }int j = 0,temp;

    for(int i =0;i<=7;i++){
      
       if(a[i]!=0){

       
     temp = a[i];
        a[i] = a[j];
        a[j]=temp;
    }
       }
       for(int j = 0;j<=7;j++){
        printf("%d",a[j]);
       }











    return 0;
}