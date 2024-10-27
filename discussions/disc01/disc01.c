#include<stdio.h>

int sum(int *summands, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) 
        sum += *(summands + i);
    return sum;
}

int main(){
    int arr[4] = {1,2,3,4};
    printf("%d\n", sum(arr, sizeof(arr)/sizeof(int)));
}