#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
	int i;
	for(i=0; i<len; i++)
	{
		if(ar[i]==target)
			return i;    // ã�� ����� �ε��� �� ��ȯ
	}
	return -1;    // ã�� �������� �ǹ��ϴ� �� ��ȯ
}

int main(void)
{
	int arr[]={3, 5, 2, 4, 9};
	int idx;

	idx=LSearch(arr, sizeof(arr)/sizeof(int), 4);
	if(idx==-1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx=LSearch(arr, sizeof(arr)/sizeof(int), 7);
	if(idx==-1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	return 0;
}