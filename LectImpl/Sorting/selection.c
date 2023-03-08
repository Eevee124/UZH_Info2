#include <stdio.h>

void selectionsort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            int min_idx = i;
            if (arr[min_idx] > arr[j]){
                min_idx = j;
            }
            if (min_idx != i){
                int temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printarr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main (){
    int a[] = {11, 9, 6, 5, 4, 3, 2, 1, 0, 0};
    int size = sizeof(a)/sizeof(a[0]);
    selectionsort(a, size);
    printarr(a, size);

    return 0;
}