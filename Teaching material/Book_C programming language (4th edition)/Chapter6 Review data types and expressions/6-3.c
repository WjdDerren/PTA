// 使用函数输出指定范围内的完数：输入两个正整数 m 和 n(1<=m,n<=1000)，输出 m~n 之间的所有完数。
// 完数就是因子和它本身相等的数。
// 要求定义并调用函数 factorsum(number)，它的功能是返回 number 的因子和。
// 例如，factorsum(12)的返回值是16 （因为1+2+3+4+6）

#include <stdio.h>

int factorsum(int number);

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    for(int i = m; i <= n; i++) {
        if(i == factorsum(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int factorsum(int number)
{
    int sum = 0;

    for(int i = 1; i <= number / 2; i++) {
        if(number % i ==0) {
            sum += i;
        }
    }

    return sum;
}