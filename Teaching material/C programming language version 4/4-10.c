// 猴子吃桃。一只猴子第一天摘下若干个桃子，当即吃了一半，又多吃了一个。
// 第二天将剩下的桃子吃掉一半，又多吃一个。以此类推。
// 到第 n 天早上在想吃时，只剩下一个桃子了。
// 问第一天摘了多少桃子。

#include <stdio.h>

int main() {
    int total = 1, n;

    printf("Please input the day(n): ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        total = (total + 1) * 2;
    }

    printf("total: %d\n", total);

    return 0;
}