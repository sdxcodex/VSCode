#include <stdio.h>
#include <string.h>
typedef struct pokemon {
    int hp;
    int atteck;
}pokemon;
int main () {
    pokemon pikachu;
    pikachu.atteck =9;
    pikachu.hp = 10;
    pokemon *x= &pikachu;
 
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.atteck);
    printf("%p\n",x);
        return 0;
}