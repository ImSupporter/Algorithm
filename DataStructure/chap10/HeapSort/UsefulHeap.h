#ifndef __USEFUL_HEAP_H__
#define __USEFUL_HEAP_H__

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef int HData;
typedef int ProirityComp(HData d1, HData d2);

typedef struct _heap{
    ProirityComp *comp;
    int numOfData;
    HData heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap *ph, ProirityComp pc);
int HIsEmpty(Heap * ph);

void HInsert(Heap *ph, HData data);
HData HDelete(Heap *ph);

#endif