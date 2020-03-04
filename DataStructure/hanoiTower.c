#include <stdio.h>

void move(int num, int from, int by, int to){
    if(num == 1)    printf("%d를 %d에서 %d로 이동\n", num, from, to);
    else{
        move(num - 1, from, to, by);
        printf("%d를 %d에서 %d로 이동\n", num, from, to);
        move(num - 1, by, from, to);
    }
}

int main(void){
    int height = 0;
    scanf("%d", &height);
    move(height, 1,2,3);
    
    return 0;
}