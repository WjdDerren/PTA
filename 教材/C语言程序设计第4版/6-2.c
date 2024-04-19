// 使用函数累加由 n 个 a 构成的整数之和：输入两个正整数 a 和 n，求 a+aa+aaa+a...a(n个a).
// 要求定义并调用函数 fn(a, n)，它的功能是返回 aa..a(n个a)，例如 fn(3,2)的返回值是 33。

#include <stdio.h>

int fn(int a, int n);

int main()
{
    int a, n, sum = 0;
    scanf("%d%d", &a, &n);

    for(int i = 1; i <= n; i++) {
        sum += fn(a, i);
    }

    printf("%d\n", sum);

    return 0;
}

int fn(int a, int n)
{
    int res = 0;

    for(int i = 0; i < n; i++) {
        res = res * 10 + a;
    }

    return res;
}