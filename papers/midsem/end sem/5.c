#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseSwap(int arr[], int n)
{
    int *start = arr;
    int *end = arr + n - 1;

    while(start < end)
    {
        swap(start, end);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseSwap(arr, n);

    printArray(arr, n);

    return 0;
}
