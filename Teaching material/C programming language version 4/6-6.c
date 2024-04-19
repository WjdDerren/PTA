// 使用函数输出一个整数的逆序数：输入一个整数，将它逆序输出。
// 要求定义并调用函数 reverse(number)，它的功能是返回 number 的逆序数。
// 例如，reverse(12345)的返回值是54321

#include <stdio.h>

int reverse(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", reverse(n));

    return 0;
}

int reverse(int n)
{
    int res = 0;

    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }

    return res;
}