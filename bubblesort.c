#include <stdio.h>

void bubblesort(int arr[], int n);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    bubblesort(arr, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubblesort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            int temp;

            if(arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
}