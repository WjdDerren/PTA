// 递归求阶乘和：输入一个整数 n(n>0&&n<=10)，求1!+2!+3!+...+n!。
// 定义并调用函数fact(n)计算n!，函数类型是double。

#include <stdio.h>

double fact(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int n;
    double sum = 0;

    printf("Input n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += fact(i);
    }

    printf("result = %.0lf\n", sum);

    return 0;
}