#include <stdio.h>
#include <string.h>
int main () {
    char a[100];
    scanf("%s",a);
    int t = strlen(a);
    int j =0;
    for(int i =0;i<t;i++){
        if(a[i]!='a' && a[i]!='e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' 
        && a[i] != 'A' && a[i]!= 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U'){
            a[j]=a[i];
            j++;
        }
    }
    for(int i =0;i<j;i++){
        printf("%c",a[i]);
    }

    return 0;
}