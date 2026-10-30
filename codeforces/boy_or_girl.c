#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);

    int t = strlen(a);
    int distinct = 0;

    for (int i = 0; i < t; i++) {
        int found = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = 1;
                break;
            }
        }

        if (found==0)
            distinct++;
    }

    if (distinct % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}