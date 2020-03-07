#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.c"
#include "BinaryTree2.c"

BTreeNode *MakeExpTree(char exp[]){
    Stack stack;
    BTreeNode *pnode;

    int expLen = strlen(exp);
    int i;

    for(i = 0; i<expLen; i++){
        pnode = MakeBTreeNode();

        if(isdigit(exp[i])){
            SetData(pnode, exp[i]-'0');
        }
        else{
            MakeRightSubTree(pnode, SPop(&stack));
            MakeLeftSubTree(pnode, SPop(&stack));
            SetData(pnode, exp[i]);
        }
        SPush(&stack, pnode);
    }

    return SPop(&stack);
}

int EvaluateExpTree(BTreeNode *bt){
    int op1, op2;

    if(GetLeftSubTree(bt)==NULL && GetRightSubTree(bt)==NULL)
        return GetData(bt);
    
    op1 = EvaluateExpTree(GetLeftSubTree(bt));
    op2 = EvaluateExpTree(GetRightSubTree(bt));

    switch(GetData(bt)){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/' :
            return op1/op2;
    }

    return 0;
}

void ShowNodeData(int data){
    if(0<=data && data <=9)
        printf("%d ", data);
    else
        printf("%c ", data);
}

void ShowPreFixTypeExp(BTreeNode * bt){
    PreorderTraverse(bt, ShowNodeData);
}

void ShowInFixTypeExp(BTreeNode * bt){
    InorderTraverse(bt, ShowNodeData);
}

void ShowPostFixTypeExp(BTreeNode * bt){
    PostorderTraverse(bt, ShowNodeData);
}