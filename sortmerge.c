#include <stdio.h>
void mergesort(int arr[], int n);
void mergesplit(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);

int main(){
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    mergesort(arr, n);
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void mergesort(int arr[], int n){
    mergesplit(arr, 0, n-1);
}

void mergesplit(int arr[], int l, int r){
    if (l < r){
        int m = l + (r - l) / 2;

        mergesplit(arr, l, m);
        mergesplit(arr, m+1, r);

        merge(arr, l, m, r);
        }
}

void merge(int arr[], int l, int m, int r){
    int leftLen = m - l + 1;
    int rightLen = r - m;

    int leftArr[leftLen];
    int rightArr[rightLen];

    for(int i = 0; i < leftLen; i++){
        leftArr[i] = arr[l + i];
    }
    for(int i = 0; i < rightLen; i++){
        rightArr[i] = arr[m + 1 + i];
    }
    
    int i, j, k;

    for(i = 0, j = 0, k = l; k <= r; k++){
        if(j < rightLen && (i >= leftLen || rightArr[j] <= leftArr[i])){
            arr[k] = rightArr[j];
            j++;
        }
        else{
            arr[k] = leftArr[i];
            i++;
        }
    }
}