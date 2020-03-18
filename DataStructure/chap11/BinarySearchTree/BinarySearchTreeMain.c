#include <stdio.h>
#include "BinarySearchTree.c"

int main(void){
    BTreeNode *bstRoot;
    BTreeNode *sNode;

    BSTMakeAndInit(&bstRoot);

    BSTInsert(&bstRoot, 9);
    BSTInsert(&bstRoot, 1);
    BSTInsert(&bstRoot, 6);
    BSTInsert(&bstRoot, 2);
    BSTInsert(&bstRoot, 8);
    BSTInsert(&bstRoot, 3);
    BSTInsert(&bstRoot, 5);

    sNode = BSTSearch(bstRoot, 1);
    if(sNode == NULL){
        printf("Search Fail\n");
    }
    else{
        printf("Search Success : %d\n", BSTGetNodeData(sNode));
    }

    sNode = BSTSearch(bstRoot, 6);
    if(sNode == NULL){
        printf("Search Fail\n");
    }
    else{
        printf("Search Success : %d\n", BSTGetNodeData(sNode));
    }

    sNode = BSTSearch(bstRoot, 7);
    if(sNode == NULL){
        printf("Search Fail\n");
    }
    else{
        printf("Search Success : %d\n", BSTGetNodeData(sNode));
    }
    return 0;
}