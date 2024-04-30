// 习题10-7 十进制转换二进制

#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin(int n)
{
    if(n == 0) {
        printf("0");
        return 0;
    }
    int res[100] = {0}, i =0;

    while(n) {
        res[i++] = n % 2;
        n /= 2;
    }
    i--;
    while(i >= 0) {
        printf("%d", res[i--]);
    }
}