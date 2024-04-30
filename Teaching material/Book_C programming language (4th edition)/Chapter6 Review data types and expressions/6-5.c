// 使用函数验证哥德巴赫猜想：任何一个不小于6的偶数均可表示为两个奇素数之和，例如 6=3+3，8=3+5。
// 将 6～100 之间的偶数都表示成两个素数之和，打印时一行打印 5 组。

#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int count = 0;

    for(int i = 6; i <= 100; i++) {
        for(int j = 3; j <= i / 2; j++) {
            if(prime(j) == 1 && prime(i - j) == 1) {
                printf("%d = %d + %d\t", i, j, i - j);
                count++;
                if(count % 5 == 0) {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}

int prime(int n)
{
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}