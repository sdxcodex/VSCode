#include <stdio.h>

void initialize(int a[], int *n) {
    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter elements:\n");
    for(int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

void insertEnd(int a[], int *n, int value) {
    a[*n] = value;
    (*n)++;
}

void insertPosition(int a[], int *n, int pos, int value) {
    if(pos < 0 || pos > *n) {
        printf("Invalid Position\n");
        return;
    }

    for(int i = *n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = value;
    (*n)++;
}

void deletePosition(int a[], int *n, int pos) {
    if(pos < 0 || pos >= *n) {
        printf("Invalid Position\n");
        return;
    }

    for(int i = pos; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }

    (*n)--;
}

void display(int a[], int n) {
    printf("Array Elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
int a[100], n;
int choice, value, pos;

initialize(a, &n);

do {
printf("\n1. Insert at End");
printf("\n2. Insert at Position");
printf("\n3. Delete from Position");
printf("\n4. Display");
printf("\n5. Exit");
printf("\nEnter Choice: ");
scanf("%d", &choice);

switch(choice) {
case 1:
printf("Enter value: ");
scanf("%d", &value);
insertEnd(a, &n, value);
break;

case 2:
printf("Enter position: ");
scanf("%d", &pos);
printf("Enter value: ");
scanf("%d", &value);
insertPosition(a, &n, pos, value);
break;

case 3:
printf("Enter position: ");
scanf("%d", &pos);
deletePosition(a, &n, pos);
break;

case 4:
display(a, n);
break;

case 5:
printf("Program Ended\n");
break;

default:
printf("Invalid Choice\n");
}

} while(choice != 5);

return 0;
}
