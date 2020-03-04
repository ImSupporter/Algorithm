#include <stdio.h>
#include "UsefulHeap.h"

int PriComp(int n1, int n2)
{
	return n2-n1;
//	return n1-n2;
}

void HeapSort(int arr[], int n, PriorityComp pc)
{
	Heap heap;
	int i;

	HeapInit(&heap, pc);

	// ���� ����� ������ ���� �����Ѵ�.
	for(i=0; i<n; i++)
		HInsert(&heap, arr[i]);

	// ������� �ϳ��� ������ ������ �ϼ��Ѵ�.
	for(i=0; i<n; i++)
		arr[i] = HDelete(&heap);
}

int main(void)
{
	int arr[4] = {3, 4, 2, 1};
	int i;

	HeapSort(arr, sizeof(arr)/sizeof(int), PriComp);

	for(i=0; i<4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
