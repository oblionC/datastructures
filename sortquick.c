#include <stdio.h>

void swap(int* a, int* b);
void quicksort(int* arr, int n);
void quicksort_recursion(int* arr, int l, int r);
int partition(int* arr, int l, int r);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    quicksort(arr, n);
    printf("\n Sorted: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int* arr, int n)
{
    quicksort_recursion(arr, 0, n-1);
}

void quicksort_recursion(int* arr, int l, int r)
{
    if(l < r)
    {
        int j = partition(arr, l, r);

        quicksort_recursion(arr, l, j - 1);
        quicksort_recursion(arr, j + 1, r);
    }
}

int partition(int* arr, int l, int r)
{
    int pivot = arr[r];
    int i, j;
    i = l;
    for(j = l; j < r; j++)
    {
        if(arr[j] <= pivot)
        {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);

    return i;
}