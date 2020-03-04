#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first=0;   // Ž�� ����� ���� �ε��� ��
	int last=len-1;   // Ž�� ����� ������ �ε��� ��
	int mid; 

	while(first<=last)
	{
		mid=(first+last)/2;   // Ž�� ����� �߾��� ã�´�. 

		if(target==ar[mid])   // �߾ӿ� ����� ���� Ÿ���̶��
		{
			return mid;
		}
		else    // Ÿ���� �ƴ϶�� 
		{
			if(target<ar[mid])   
				last=mid-1;   // �޺κ��� Ž�� ��󿡼� ����
			else
				first=mid+1;   // �պκ��� Ž�� ��󿡼� ����
		}
	}
	return -1;   // ã�� ������ �� ��ȯ�Ǵ� �� -1
} 

int main(void)
{
	int arr[]={1, 3, 5, 7, 9};
	int idx;

	idx=BSearch(arr, sizeof(arr)/sizeof(int), 7);
	if(idx==-1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx=BSearch(arr, sizeof(arr)/sizeof(int), 4);
	if(idx==-1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	return 0;
}