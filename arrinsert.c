#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int* arr = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("> ");
        scanf("%d", &arr[i]);
    }
    
    printf("Current array: ");
     for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int value, pos;
    printf("Enter value to insert and position: ");
    scanf("%d %d", &value, &pos);
    arr = realloc(arr, (n + 1) * sizeof(int));
    for(int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;

    printf("New array: ");
    for(int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}