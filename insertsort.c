#include <stdio.h>

void insertsort(int arr[], int n);

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

    insertsort(arr, n);
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertsort(int arr[], int n)
{
    int i, j;
    for(i = 1; i < n; i++)
    {
        int temp = arr[i];

        for(j = i; j >= 0; j--)
        {
            if(temp < arr[j - 1])
            {
                arr[j] = arr[j - 1];
            }
            if(temp >= arr[j - 1] || j == 0)
            {
                arr[j] = temp;
                break;
            }
        }
    }
}