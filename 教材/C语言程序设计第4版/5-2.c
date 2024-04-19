// 使用函数求奇数和：输入一批正整数（以零或负数为结束标志），求其中的奇数和。
// 要求定义和调用函数 even(n) 判断数的奇偶性，当 n 为偶数时返回 1，否则返回 0。

#include <stdio.h>

int even(int n);

int main()
{
    int n, sum = 0;

    while(1) {
        scanf("%d", &n);
        if(n <= 0) {
            break;
        }
        if(!even(n)) {
            sum += n;
        }
    }
    
    printf("%d\n", sum);

    return 0;
}

int even(int n)
{
    return n % 2 == 0 ? 1 : 0;
}