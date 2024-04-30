// 习题6-6 使用函数输出一个整数的逆序数

#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number) {
    int res = 0, flag = 0;
    if(number < 0) {
        flag = 1;
        number = -number;
    }
    
    while(number) {
        res = res * 10 + number % 10;
        number /= 10;
    }

    if(flag) {
        res = -res;
    }
    
    return res;
}