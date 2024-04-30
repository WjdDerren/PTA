// 习题5-6 使用函数输出水仙花数

#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <math.h>

int narcissistic(int number) {
    int res = 0, n = number, len = 0;
    while(n) {
        len++;
        n /= 10;
    }
    n = number;
    while(n) {
        int x = n % 10;
        res += pow(x, len);
        n /= 10;
    }
    return res == number ? 1 : 0;
}

void PrintN(int m, int n) {
    for(int i = m + 1; i < n; i++) {
        if(narcissistic(i) == 1) {
            printf("%d\n", i);
        }
    }
}