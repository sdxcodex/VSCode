#include <stdio.h>
int main () {
   typedef struct pockemom
    {  int hp;
        int atteck;
        int speed;
        char ch;       
    }x;
    x pickachu;
    
    scanf("%d",&pickachu.atteck) ;
    pickachu.hp = 40;
    pickachu.speed = 100;
    pickachu.ch = 'A';
    printf("%d",pickachu.atteck);

    x mew;
    mew =pickachu;
    printf("%d",mew.atteck);



    return 0;
}