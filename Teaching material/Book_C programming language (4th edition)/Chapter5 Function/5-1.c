// 使用函数计算分段函数的值：输入 x，计算并输出下列分段函数 f(x) 的值。
// 要求定义和调用函数 sign(x) 实现。

#include <stdio.h>

int sign(int x);

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d\n", sign(x));

    return 0;
}

int sign(int x)
{
    int res;

    if(x > 0) {
        res = 1;
    } else if(x == 0) {
        res = 0;
    } else {
        res = -1;
    }

    return res;
}