// 平方根求和：输入一个正整数 n ，计算 1+\sqrt{2}+\sqrt{3}+...+\sqrt{n} 的值(保留 2 位小数)。

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double res = 0;

    printf("Please input the n(n>=1):");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        res += sqrt(i);
    }

    printf("%.2lf\n", res);
    
    return 0;
}