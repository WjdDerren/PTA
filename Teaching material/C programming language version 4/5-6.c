// 使用函数输出水仙花数：输入两个正整数 m 和 n(1 <= m, n <= 1000)，
// 输出 m~n 之间的所有满足各位数字的立方和等于它本身的数。
// 要求定义并调用函数 is(number) 判断 number 的各位数字之和是否等于它本身。

#include <stdio.h>

int is(int number);

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    for(int i = m; i <= n; i++) {
        if(is(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int is(int number)
{
    int sum = 0, n = number;

    while(n) {
        sum += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }

    return sum == number ? 1 : 0; 
}