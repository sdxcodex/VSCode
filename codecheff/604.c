#include <stdio.h>
int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    int A,B,C;
	    scanf("%d %d %d",&A,&B,&C);
	    int max = A;
	    if(B>max){
	        max = B;
	    }
	    if(C>max){
	        max=C;
	    }
	    printf("%d\n",max);
	    
	}
    return 0;
}

