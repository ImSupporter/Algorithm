#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

int WhoIsPrecede(Point * d1, Point * d2)
{
	if(d1->xpos < d2->xpos)
	{
		return 0;
	}
	else if(d1->xpos == d2->xpos)
	{
		if(d1->ypos < d2->ypos)
			return 0;
		else
			return 1;
	}
	else
		return 1;
}


int main(void)
{
	List list;
	Point comp;
	Point * pPoint;
	ListInit(&list);

	SetSortRule(&list, WhoIsPrecede);     // ���ı����� ���!

	pPoint = (Point*)malloc(sizeof(Point));
	SetPointPos(pPoint, 3, 2);
	LInsert(&list, pPoint);

	pPoint = (Point*)malloc(sizeof(Point));
	SetPointPos(pPoint, 3, 1);
	LInsert(&list, pPoint);

	pPoint = (Point*)malloc(sizeof(Point));
	SetPointPos(pPoint, 2, 2);
	LInsert(&list, pPoint);

	pPoint = (Point*)malloc(sizeof(Point));
	SetPointPos(pPoint, 2, 1);
	LInsert(&list, pPoint);

	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &pPoint))
	{
		ShowPointPos(pPoint);
		
		while(LNext(&list, &pPoint))
			ShowPointPos(pPoint);
	}
	printf("\n");

	// xpos�� 2�� ��� ������ ����  ////////
	comp.xpos = 2;
	comp.ypos = 0;

	if(LFirst(&list, &pPoint))
	{
		if(PointComp(pPoint, &comp) == 1)
		{
			pPoint = LRemove(&list);
			free(pPoint);
		}
		
		while(LNext(&list, &pPoint))
		{
			if(PointComp(pPoint, &comp) == 1)
			{
				pPoint = LRemove(&list);
				free(pPoint);
			}
		}
	}

	// ���� �� ����� ������ ��� ////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &pPoint))
	{
		ShowPointPos(pPoint);
		
		while(LNext(&list, &pPoint))
			ShowPointPos(pPoint);
	}
	printf("\n");

	return 0;
}