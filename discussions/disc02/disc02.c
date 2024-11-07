#include<string.h>
#include<stdio.h>
#include <cstdlib>

void print_int_array(int* arr, int len){
    printf("array:");
    for(int i = 0;i < len;i++){
        printf("%d, ",arr[i]);
    }printf("\n");
}

void rotate(int* start, int* middle, int* end){
    int arrLen = (end - start);

    int rotatePrev = (middle - start);
    int rotateEnd = arrLen - rotatePrev;
    printf("%d %d\n",rotatePrev , rotateEnd);
    int* temp = (int*)malloc(arrLen * sizeof(int));

    memcpy(temp, start, rotatePrev*sizeof(int));
    memmove(start, start + rotatePrev, rotateEnd*sizeof(int));
    memcpy(start + rotateEnd, temp, rotatePrev*sizeof(int));
    free(temp);

}
// 1 $ ./rotate
// 2 Array: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// 3 Array: 6, 7, 8, 9, 10, 1, 2, 3, 4, 5
// 4 Array: 7, 8, 9, 10, 1, 2, 3, 4, 5, 6
// 5 Array: 7, 8, 9, 10, 2, 1, 3, 4, 5, 6


int main(int argc, char *argv[]) {
 int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 print_int_array(array, 10);
 rotate(array, array + 5, array + 10);
 print_int_array(array, 10);
 rotate(array, array + 1, array + 10);
 print_int_array(array, 10);
 rotate(array + 4, array + 5, array + 6);
 print_int_array(array, 10);
 return 0;
 }
