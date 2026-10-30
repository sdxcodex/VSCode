#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    int A,B;
	    scanf("%d %d",&A,&B);
	    int s1=0,s2=0;
	    int x=1;
	    while(A>0 || B>0){
	        if(x%2!=0 && A>0){
	            if(A>=x){
	            s1 += x;
	            A-=x;
	            }
                 x++;
        
	            	        }
	        else {
	            
	            if(B>=x){
	            s2 +=x;
	            B-=x;
	                
	            }
                x++;
	        }
              if(A<x && B<x){
                break;
            }
	    }
	    if(s1>s2){
	        printf("Limak\n");
	    }
	    else {
	        printf("Bob\n");
	    }
	}
}

