#include <stdio.h>
int main () {
    int n ;
    scanf("%d",&n);
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int count =0;
    while(a && n>=500){
        
            n-=500;
            a--;
            count++;
    
    }
    while(b && n>=200){
      
            n-=200;
            b--;
            count++;
       
    }
    while(c && n>=100){
       
            n-=100;
            c--;
            count++;
      
    }
    if(n==0)
    printf("\n%d",count);
    else printf("Not possible");
    return 0;
}