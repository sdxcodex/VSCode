#include <stdio.h>

int main() {
    int a[100];

    for(int i = 0; i < 100; i++) {
        a[i] = i + 1;
    }

    int alive = 100;
    int i = 0;
    int count = 0;

    while(alive > 1) {

        if(a[i] != 0) {
            count++;

            if(count == 3) {
                a[i] = 0;
                alive--;
                count = 0;
            }
        }

        if(i>99){
            i=0;
        }
    }

    for(int j = 0; j < 100; j++) {
        if(a[j] != 0) {
            printf("%d\n", a[j]);
            break;
        }
    }

    return 0;
}
