#include <stdio.h>
#include "InfixCalculator.c"

int main(void){
    char exp[] = "((1-2)+3)*(5-2)";

    printf("%s = %d\n", exp, EvalInfixExp(exp));

    return 0;
}