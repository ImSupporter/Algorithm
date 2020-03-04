#include <stdio.h>
#include "BinarySearchTree.h"

int main(void)
{
	BTreeNode * bstRoot;
	BTreeNode * sNode;    // search node

	BSTMakeAndInit(&bstRoot);

	BSTInsert(&bstRoot, 9);
	BSTInsert(&bstRoot, 1);
	BSTInsert(&bstRoot, 6);
	BSTInsert(&bstRoot, 2);
	BSTInsert(&bstRoot, 8);
//	BSTInsert(&bstRoot, 4);
	BSTInsert(&bstRoot, 3);
	BSTInsert(&bstRoot, 5);
//	BSTInsert(&bstRoot, 7);

	sNode = BSTSearch(bstRoot, 1);
	if(sNode == NULL)
		printf("Ž�� ���� \n");
	else
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 4);
	if(sNode == NULL)
		printf("Ž�� ���� \n");
	else
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 6);
	if(sNode == NULL)
		printf("Ž�� ���� \n");
	else
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 7);
	if(sNode == NULL)
		printf("Ž�� ���� \n");
	else
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));

	return 0;
}