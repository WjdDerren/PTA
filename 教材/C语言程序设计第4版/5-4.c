// 利用函数计算素数个数并求和：输入两个正整数 m 和 n(1 <= m, n <= 500)，
// 统计并输出 m 和 n 之间的素数的个数以及这些素数的和。
// 要求定义并调用函数 prime(m) 判断 m 是否为素数。

#include <stdio.h>
#include <math.h>

int prime(int m);

int main ()
{
    int m, n, sum = 0, count = 0;
    scanf("%d%d", &m, &n);

    for(int i = m; i <= n; i++) {
        if(prime(i)) {
            count++;
            sum += i;
        }
    }
    
    printf("count = %d, sum = %d\n", count, sum);

    return 0;
}

int prime(int m)
{
    if(m <= 1) {
        return 0;
    }

    for(int i = 2; i <= sqrt(m); i++) {
        if(m % i == 0) {
            return 0;
        }
    }

    return 1;
}