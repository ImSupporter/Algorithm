#include <stdio.h>
#include "InfixToPostfix.c"

int main(void){
    char exp1[] = "((1-2)+3)*(5-2)";

    ConvToRPNExp(exp1);

    printf("%s\n",exp1);
    return 0;
}