#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first=0;
	int last=len-1;
	int mid; 
	int opCount=0;   // �񱳿����� Ƚ���� ���

	while(first<=last)
	{
		mid=(first+last)/2;

		if(target==ar[mid])
		{
			return mid;
		}
		else 
		{
			if(target<ar[mid])   
				last=mid-1;
			else
				first=mid+1;
		}
		opCount+=1;   // �񱳿����� Ƚ�� 1 ����
	}
	printf("�񱳿��� Ƚ��: %d \n", opCount);  // Ž�� ���� �� ����Ƚ�� ���
	return -1;
} 

int main(void)
{
	int arr1[500]={0,};    // ��� ��� 0���� �ʱ�ȭ
	int arr2[5000]={0,};    // ��� ��� 0���� �ʱ�ȭ
	int arr3[50000]={0,};    // ��� ��� 0���� �ʱ�ȭ
	int idx;

	// ������� ���� ���� 1�� ã����� ���
	idx=BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
	if(idx==-1)
		printf("Ž�� ���� \n\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	// ������� ���� ���� 2�� ã����� ���
	idx=BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
	if(idx==-1)
		printf("Ž�� ���� \n\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	// ������� ���� ���� 3�� ã����� ���
	idx=BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
	if(idx==-1)
		printf("Ž�� ���� \n\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	return 0;
}