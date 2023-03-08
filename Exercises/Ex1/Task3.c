#include <stdio.h>
#include <stdbool.h>

int pairSum(int c, int A[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(A[i] + A[j] == c){
                return 1;
            }
        }
    }
    return 0;

}

int pairSumSorted(int c, int A[], int n){

    int i = 0;
    int j = n;
    while(i < j){

        if (A[i] + A[j] == c){
            return 1;
        } else if(A[i] + A[j] > c){
            j - 1;
        } else{
            i + 1;
        }
    }
    return 0;
}

int main(){
    int c = 14;
    int A[] = {1, 3, 5, 6, 7, 34, 6, 9, 12};
    int n = sizeof(A)/sizeof(A[0]);
    int sortedA[] = {1, 2, 4, 5, 6, 6, 7, 12, 34};

    int One = pairSum(c, A, n);
    int Two = pairSumSorted(c, sortedA, n);

    printf("For some reason i can print anything, sadge.");
    printf("PairSum says %d.", One);
    printf("PairSumSorted says %d.", Two);

    return 0;
}