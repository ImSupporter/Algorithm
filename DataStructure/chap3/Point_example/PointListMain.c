#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "ArrayList.c"
#include "Point.h"
#include "Point.c"

int main(void){
    List list;
    Point compPos;
    Point *ppos;

    ListInit(&list);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    printf("elements Num : %d\n", LCount(&list));

    if(LFirst(&list, &ppos)){
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }
    printf("\n");

    compPos.xpos = 2;
    compPos.ypos = 2;

    if(LFirst(&list, &ppos)){
        if(PointComp(ppos, &compPos)==1){
            ppos = LRemove(&list);
            free(ppos);
        }

        while(LNext(&list, &ppos)){
            if(PointComp(ppos, &compPos)==1){
                ppos=LRemove(&list);
                free(ppos);
            }
        }
    }

    printf("현재 데이터 수 : %d\n", LCount(&list));

    if(LFirst(&list, &ppos)){
        ShowPointPos(ppos);

        while(LNext(&list, &ppos)){
            ShowPointPos(ppos);
        }
    }

    printf("\n");

    return 0;
}