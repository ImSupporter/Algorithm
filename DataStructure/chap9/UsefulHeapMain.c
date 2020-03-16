#include <stdio.h>
#include "UsefulHeap.c"

int DataPriorityComp(char c1, char c2){
    return c2 - c1;
}

int main(void){
    Heap heap;
    HeapInit(&heap, DataPriorityComp);

    HInsert(&heap, 'A');
    HInsert(&heap, 'B');
    HInsert(&heap, 'C');

    printf("%c \n", HDelete(&heap));

    HInsert(&heap, 'A');
    HInsert(&heap, 'B');
    HInsert(&heap, 'C');

    printf("%c \n", HDelete(&heap));

    while(!HIsEmpty(&heap))
        printf("%c \n", HDelete(&heap));

    return 0;
}