#include <stdio.h>
#include "Deque.h"

int main(void)
{
	// Deque�� ���� �� �ʱ�ȭ ///////
	Deque deq;
	DequeInit(&deq);

	// ������ �ֱ� 1�� ///////
	DQAddFirst(&deq, 3); 
	DQAddFirst(&deq, 2); 
	DQAddFirst(&deq, 1); 

	DQAddLast(&deq, 4); 
	DQAddLast(&deq, 5); 
	DQAddLast(&deq, 6);

	// ������ ������ 1�� ///////
	while(!DQIsEmpty(&deq))
		printf("%d ", DQRemoveFirst(&deq));

	printf("\n");

	// ������ �ֱ� 2�� ///////
	DQAddFirst(&deq, 3); 
	DQAddFirst(&deq, 2); 
	DQAddFirst(&deq, 1);
	
	DQAddLast(&deq, 4); 
	DQAddLast(&deq, 5); 
	DQAddLast(&deq, 6);

	// ������ ������ 2�� ///////
	while(!DQIsEmpty(&deq))
		printf("%d ", DQRemoveLast(&deq));

	return 0;
}