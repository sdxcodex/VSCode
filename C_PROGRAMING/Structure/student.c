#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[50];
    int roll_no;
    char department[50];
    int year;
} student;

void compare(char a[], char b[]) {
    if (strcmp(a, b) == 0) {
        printf("Equal\n");
    } else {
        printf("Not Equal\n");
    }
}

int main() {
    student s1, s2;

    strcpy(s1.department, "cse");
    strcpy(s2.department, "ece");

    compare(s1.department, s2.department);

    return 0;
}