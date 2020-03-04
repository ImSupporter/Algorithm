#include <stdio.h>
#include "ListBaseQueue.h"

#define BUCKET_NUM		10

void RadixSort(int arr[], int num, int maxLen)   // maxLen�� ���� �� �������� ����
{
	Queue buckets[BUCKET_NUM];
	int bi;
	int pos;
	int di;
	int divfac = 1;
	int radix;

	// �� 10���� ��Ŷ �ʱ�ȭ
	for(bi=0; bi<BUCKET_NUM; bi++)
		QueueInit(&buckets[bi]);

	// ���� �� �������� ���̸�ŭ �ݺ�
	for(pos=0; pos<maxLen; pos++)
	{ 
		// ���� ����� ����ŭ �ݺ�
		for(di=0; di<num; di++)
		{
			// N��° �ڸ��� ���� ����
			radix = (arr[di] / divfac) % 10;

			// ������ ���ڸ� �ٰŷ� ������ ��Ŷ�� ����
			Enqueue(&buckets[radix], arr[di]);
		}

		// ��Ŷ ����ŭ �ݺ�
		for(bi=0, di=0; bi<BUCKET_NUM; bi++)
		{
			// ��Ŷ�� ����� �� ������� �� ������ �ٽ� arr�� ����
			while(!QIsEmpty(&buckets[bi]))
				arr[di++] = Dequeue(&buckets[bi]);
		}

		// N��° �ڸ��� ���� ������ ���� �������� ����
		divfac *= 10;
	}	
}

int main(void)
{
	int arr[7] = {13, 212, 14, 7141, 10987, 6, 15};

	int len = sizeof(arr) / sizeof(int);
	int i;

	RadixSort(arr, len, 5);

	for(i=0; i<len; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}