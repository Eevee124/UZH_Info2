#include <stdio.h>

int max(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

//change A as you please, maybe later on I will include a version with scanner

int main (){
    int A[] = {1, 36, 16, 5, 3, 15, 36, 12, 16};
    int first = max(A[0], A[1]);
    int second = (A[0] == first) ? A[1] : A[0];
    int size = sizeof(A) / sizeof(A[0]);

    for (int i = 2; i < size; i++){
        if (A[i] > first && A[i] > second){
            second = first;
            first = A[i];
        }else if(A[i] < first && A[i] > second){
            second = A[i];
        }
    }
    printf("The second largest Element of Array A is %d \n", second);
    return 0;
}
