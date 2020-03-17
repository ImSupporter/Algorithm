#include <stdio.h>
#include "UsefulHeap.c"

int PriComp(int n1, int n2){
    return n2-n1;
}

void HeapSort(int arr[], int n, ProirityComp pc){
    Heap heap;
    int i;

    HeapInit(&heap, pc);

    for(i=0; i<n;i++){
        HInsert(&heap, arr[i]);
    }

    for(i = 0; i<n;i++){
        arr[i] = HDelete(&heap);
    }
}

int main(void){
    int arr[7] = {7,4,5,6,3,2,1,};
    int i;

    HeapSort(arr, sizeof(arr)/sizeof(int), PriComp);

    for(i = 0; i<7;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}