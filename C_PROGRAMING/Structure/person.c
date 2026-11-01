#include <stdio.h>
#include <string.h>
struct person 
{
    char name[50];
    int age ;
    int salary;
}s1,s2;

int main () {
    scanf("%[^\n]s",s1.name);
    printf("%s",s1.name);
    scanf("%d",&s2.age);
    printf("%d",s2.age);



    return 0;
}