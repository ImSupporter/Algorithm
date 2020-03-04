#include <stdio.h>
#include "PostCalculator.c"

int main(void){
    char postExp[] = "42*8+";
    printf("%d\n", EvalRPNExp(postExp));
    return 0;

}