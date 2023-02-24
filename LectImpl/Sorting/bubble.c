#include <stdio.h>

int *bubblesort(int in [], int size) {

    for (int i = 0; i < size; i++){
        for (int j = 1; j < size - i; j++){
            int temp = in[j];
            if(in[j-1] > in[j]){
                in[j] = in[j-1];
                in[j-1] = temp;
            }
        }
    }
    return in;
}


void print(int in[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", in[i]);
    }
}

int main () {
    int in [] = {6, 5, 7, 2, 3, 0};
    int size = sizeof(in)/sizeof(in[0]);
    bubblesort(in, size);
    print(in, size);
    return 0;
}