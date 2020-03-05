#include <stdio.h>
#include "CircularQueue.h"

int main(void){
	Queue Q;
	QueueInit(&Q);
	
	Enqueue(&Q, 1); Enqueue(&Q, 2);
	Enqueue(&Q, 3); Enqueue(&Q, 4);
	Enqueue(&Q, 5); Enqueue(&Q, 6);

	while(!QIsEmpty(&Q)){
		printf("%d ", Dequeue(&Q));
	}
	return 0;
}
