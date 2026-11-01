#include <stdio.h>
#include <string.h>
int main () {
    struct x {
        int marks ;
        float persentage;
        char cgpa[50];
        char c[50];
    }s1,s2;
   
    scanf("%d",&s1.marks);
    printf("%d",s1.marks);
    scanf("%f",&s1.persentage);
    printf("%f",s1.persentage);
    scanf("%s",s1.cgpa);
    printf("%s",s1.cgpa);
    strcpy(s1.c,"shiv");
    printf("%s",s1.c);








    return 0;
}