// 习题4-9 打印菱形图案

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    if(n % 2 == 0) {
        return 0;
    }

    for(i = 1; i <= n / 2 + 1; i++) {
        for(j = i; j < n / 2 + 1; j++) {
            printf("  ");
        }
        for(j = 1; j <= i * 2 -1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    i -= 2;
    for(; i >= 1; i--) {
        for(j = i; j < n / 2 + 1; j++) {
            printf("  ");
        }
        for(j = 1; j <= i * 2 -1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}