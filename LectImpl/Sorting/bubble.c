#include <stdio.h>


void printarr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void bubblesort(int arr[], int n){

    for (int i = 0; i < n-1; i++){
        for (int j = 1; j < n-i; j++){
            if (arr[j-1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
        //printarr(arr, n);
        //printf("\n");
    }
}

int main(){
    int a[] = {11, 9, 6, 5, 4, 3, 2, 1, 0};
    int size = sizeof(a)/sizeof(a[0]);
    bubblesort(a, size);

    printarr(a, size);

    return 0;
}

