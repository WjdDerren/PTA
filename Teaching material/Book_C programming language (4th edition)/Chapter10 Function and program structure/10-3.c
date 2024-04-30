// 递归实现计算 x^n：输入实数 x 和正整数 n，用递归函数计算 x^n 的值。

#include <stdio.h>

double power(int x, int n) {
    if(n == 1) {
        return x;
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    int x, n;

    printf("Input x, n:");
    scanf("%d %d", &x, &n);

    printf("result = %.0lf\n", power(x, n));

    return 0;
}