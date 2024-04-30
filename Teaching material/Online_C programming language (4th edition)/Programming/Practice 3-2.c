// 练习3-2 计算符号函数的值

#include <stdio.h>

int main()
{
    int n, res = 0;
    scanf("%d", &n);
    
    if(n < 0) {
        res = -1;
    } else if(n == 0) {
        res = 0;
    } else {
        res = 1;
    }

    printf("sign(%d) = %d\n", n, res);

    return 0;
}