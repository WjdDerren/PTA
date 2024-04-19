// 输入一个正整数 n，求e = 1! + 2! + 3! +...+ n! 的值。要求定义和调用函数fact(n)计算n!，函数类型double。

#include <stdio.h>

double fact(int n) {
    double res = 1;
    
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    
    return res;
}

int main() {
    int n;
    double res;

    printf("Please input the n(n>=1):");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        res += fact(i);
    }
    
    printf("e = %.0lf\n", res);

    return 0;
}
