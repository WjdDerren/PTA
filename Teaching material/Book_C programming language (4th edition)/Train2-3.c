// 练习2-3 输出倒三角图案
// 本题要求编写程序，输出指定的由“*”组成的倒三角图案。

// 输入格式:
// 本题目没有输入。

// 输出格式:
// 按照下列格式输出由“*”组成的倒三角图案。

// * * * *
//  * * *
//   * *
//    *

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