#ifndef __BINARY_TREE3_H__
#define __BINARY_TREE3_H__

typedef int BTData;

typedef struct _bTreeNode
{
   BTData data;
   struct _bTreeNode *left;
   struct _bTreeNode *right;
}BTreeNode;

BTreeNode *MakeBTreeNode(void);
BTData GetData(BTreeNode *bt);
void SetData(BTreeNode *bt, BTData data);

BTreeNode *GetLeftSubTreeNode(BTreeNode *bt);
BTreeNode *GetRightSubTreeNode(BTreeNode *bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);

typedef void VisitFuncPtr(BTData data);

void PreorderTraverse(BTreeNode * bt, VisitFuncPtr action);
void InorderTraverse(BTreeNode * bt, VisitFuncPtr action);
void PostorderTraverse(BTreeNode * bt, VisitFuncPtr action);

BTreeNode *RemoveLeftSubTree(BTreeNode * bt);
BTreeNode *RemoveRightSubTree(BTreeNode * bt);
void changeLeftSubTree(BTreeNode *bt, BTreeNode * sub);
void changeRightSubTree(BTreeNode *bt, BTreeNode * sub);

#endif