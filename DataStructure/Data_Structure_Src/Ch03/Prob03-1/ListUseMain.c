#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	int data, i;
	int sum=0;
	ListInit(&list);

	/*** ���� 1���� 9���� ���� ***/
	for(i=1; i<10; i++)
		LInsert(&list, i);

	/*** ���� ��� �� ��� ***/
	if(LFirst(&list, &data)) 
	{
		sum += data;
		
		while(LNext(&list, &data))   
			sum += data;
	}
	printf("SUM = %d \n\n", sum);

	/*** 2�� ��� 3�� ��� ����***/
	if(LFirst(&list, &data))
	{
		if(data%2==0 || data%3==0)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data%2==0 || data%3==0)
				LRemove(&list);
		}
	}

	/*** ���� �� ����� ������ ��ü ��� ***/
	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}