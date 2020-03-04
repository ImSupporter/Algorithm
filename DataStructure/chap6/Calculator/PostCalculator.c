#include <string.h>
#include <ctype.h>
#include "ListBaseStack.c"
#include "PostCalculator.h"

int EvalRPNExp(char exp[]){
    Stack stack;
    int expLen = strlen(exp);
    int i;
    char tok, op1, op2;

    StackInit(&stack);

    for(i = 0; i<expLen ;i++){
        tok  = exp[i];

        if(isdigit(tok)){
            SPush(&stack, tok - '0');
        }

        else{
            op2 = SPop(&stack);
            op1 = SPop(&stack);

            switch (tok)
            {
            case '+':
                SPush(&stack, op1 + op2);
                break;
            case '-':
                SPush(&stack, op1-op2);
                break;
            case '*':
                SPush(&stack, op1*op2);
                break;
            case '/':
                SPush(&stack, op1/op2);
                break;
            
            default:
                break;
            }
        }
    }
    return SPop(&stack);
}
