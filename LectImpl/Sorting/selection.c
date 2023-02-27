#include <stdio.h>

void selectionsort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for (int j = i; j < n-1; j++){
            int min = arr[j];
            if (arr[j] > arr[j+1]){
                min = arr[j+1];
            }
        }
    }

}

void printarray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr);
    }
}


int main (){
    
}