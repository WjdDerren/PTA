// 练习2-3 输出倒三角图案

#include <stdio.h>

int main()
{
    int i, j, first;
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        first = 1;
        for(j = 4; j > i; j--) {
            if(first == 1) {
                printf("*");
                first = 0;
            } else {
                printf(" *");
            }
        }
        printf("\n");
    }

    return 0;
}