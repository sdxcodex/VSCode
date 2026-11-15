#include <stdio.h>
#include <string.h>
int main (){
    FILE *ptr = fopen("CW.txt","w");
    char ch[]="shivraj Dhane";
    fputs(ch,ptr);
    fclose(ptr);




    return 0;
}