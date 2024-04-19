// 一对兔子，从出生后第 3 个月起每个月都生一对兔子。小兔子长到第 3 个月后每个月又生一对兔子。
// 问第 1 个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到 n 对？
// 输入一个不超过 10000 的正整数 n，输出兔子总数达到 n 最少需要的月数。

#include <stdio.h>

int main() {
    int n, month = 2, f1 = 1, f2 = 1, temp;

    printf("Please input the n: ");
    scanf("%d", &n);

    while(f2 <= n) {
        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
        month++;
    }

    printf("需要 %d 个月, 当月有 %d 只兔子\n", month, f2);

    return 0;
}