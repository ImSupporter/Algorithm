#include <stdio.h>
#include "CLinkedList.c"

int main(void){

    List list;
    int data,i,nodeNum;
    ListInit(&list);

    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);

    LInsertFront(&list, 2);
    LInsertFront(&list, 1);
    
    if(LFirst(&list, &data)){
        printf("%d ", data);

        for(int i =0; i<LCount(&list)-1;i++){
            if(LNext(&list, &data))
                printf("%d ",data);
        }
    }
    printf("\n\n");

    if(LFirst(&list, &data)){
        if(data % 2 == 0){
            LRemove(&list);
        }

        for(int i =0; i<LCount(&list)-1;i++){
            LNext(&list, &data);
            if(data % 2 == 0){
                LRemove(&list);
            }
        }
    }

    if(LFirst(&list, &data)){
        printf("%d ", data);

        for(int i =0; i<LCount(&list)-1;i++){
            if(LNext(&list, &data))
                printf("%d ",data);
        }
    }
    printf("\n\n");

}