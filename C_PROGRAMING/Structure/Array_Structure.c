#include <stdio.h>
#include <string.h>
typedef struct pokemon
{  char name[50];
   int hp;
   int atteck;
   char tier;
    
}pokemon;

int main () {
    pokemon a[3];
    strcpy(a[0].name,"pikachu");
    a[0].atteck = 50;
    a[0].hp = 30;
    a[0].tier = 'A';

    strcpy(a[1].name,"charizard");
    a[1].atteck = 500;
    a[1].hp = 300;
    a[1].tier = 'B';

    strcpy(a[2].name,"Mew");
    a[2].atteck = 5000;
    a[2].hp = 3000;
    a[2].tier = 'C';

    for(int i =0; i<3;i++){
        printf("%s\n",a[i].name);
        printf("%d\n",a[i].atteck);
        printf("%d\n",a[i].hp);
        printf("%c\n",a[i].tier);
    }




    return 0;
}