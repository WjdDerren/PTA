// 打印菱形星号*图案，输入一个正整数 n（ n为奇数），打印一个高度为 n 的 * 菱形图案

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Please input the n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n / 2; i++) {
        for(j = i ; j <= n / 2; j++) {
            printf("  ");
        }
        for(j = 1; j <= i * 2 - 1; j++) {
            printf(" *");
        }
        printf("\n");
    }
    for(; i >= 0; i--) {
        for(j = i ; j <= n / 2; j++) {
            printf("  ");
        }
        for(j = 1; j <= i * 2 - 1; j++) {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}