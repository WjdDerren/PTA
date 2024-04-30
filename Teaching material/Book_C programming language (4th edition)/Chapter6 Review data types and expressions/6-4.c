// 使用函数输出指定范围内的斐波那契数：输入两个正整数 m 和 n(1<=m,n<=10000)，输出 m~n 之间所有的斐波那契数。
// 1 1 2 3 5 8 13 21...
// 要求定义并调用函数 fib(n)，它的功能是返回第 n 项斐波那契数。
// 例如，fib(7)的返回值是13

#include <stdio.h>

int fib(int n);

int main()
{
    int m, n, i;
    scanf("%d%d", &m, &n);

    for(i = 1; fib(i) < m; i++);

    while(fib(i) <= n) {
        printf("%d ", fib(i++));
    }

    return 0;
}

int fib(int n)
{
    if(n <= 2) {
        return 1;
    }

    int f1 = 1, f2 = 1, temp;

    for(int i = 3; i <= n; i++) {
        temp = f2;
        f2 += f1;
        f1 = temp;
    }

    return f2;
}