#include <stdio.h>

void printarr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void insertionsort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int compare = i;
        while ( compare > 0 && (arr[compare - 1] > arr[compare])){
            int temp = arr[compare];
            arr[compare] = arr[compare -1];
            arr[compare-1] = temp;
            compare = compare -1;
        }
       //printarr(arr, n);
       //printf("\n");
    }
}

int main (){
    int a[] = {5, 11, 9, 6, 10, 4, 0, 2, 1, 50};
    int size = sizeof(a)/sizeof(a[0]);
    insertionsort(a, size);
    printarr(a, size);

    return 0;
}