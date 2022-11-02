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
    printf("\n");
    
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for(int i = pos; i < n; i++)
        arr[i - 1] = arr[i];
    n--;

    printf("Current array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}