// 习题5-1 符号函数

#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int sign(int x) {
    int res = 0;
    if(x > 0) {
        res = 1;
    } else if(x == 0) {
        res = 0;
    } else {
        res = -1;
    }

    return res;
}