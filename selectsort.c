#include <stdio.h>

void selectsort(int arr[], int n);

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

    selectsort(arr, n);
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0; 
}

void selectsort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        int locofMin = i;
        for(j = i; j < n; j++)
        {
            if(arr[j] < arr[locofMin])
            {
                locofMin = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[locofMin];
        arr[locofMin] = temp; 
    }
}