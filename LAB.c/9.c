#include <stdio.h>
#include <string.h>

struct Word {
    char word[50];
    int freq;
};

int main() {
    char str[500];

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    struct Word w[100];
    int count = 0;

    char *token = strtok(str, " ");

    while(token != NULL) {

        int found = 0;

        for(int i = 0; i < count; i++) {
            if(strcmp(w[i].word, token) == 0) {
                w[i].freq++;
                found = 1;
                break;
            }
        }

        if(!found) {
            strcpy(w[count].word, token);
            w[count].freq = 1;
            count++;
        }

        token = strtok(NULL, " ");
    }

    for(int i = 0; i < count - 1; i++) {
        for(int j = i + 1; j < count; j++) {

            if(w[i].freq < w[j].freq) {

                struct Word temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
        }
    }

    printf("\nWord Frequencies:\n");

    for(int i = 0; i < count; i++) {
        printf("%s : %d\n", w[i].word, w[i].freq);
    }

    return 0;
}