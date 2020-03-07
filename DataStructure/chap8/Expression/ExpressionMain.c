#include <stdio.h>
#include "ExpressionTree.c"

int main(void){
    char exp[] = "12+7*";
    BTreeNode * eTree = MakeExpTree(exp);

    printf("전위 표기법의 수식 : ");
    ShowPreFixTypeExp(eTree); printf("\n");

    printf("중위 표기법의 수식 : ");
    ShowInFixTypeExp(eTree); printf("\n");

    printf("후위 표기법의 수식 : ");
    ShowPostFixTypeExp(eTree); printf("\n");

    printf("연산 결과: %d\n", EvaluateExpTree(eTree));
    return 0;
}