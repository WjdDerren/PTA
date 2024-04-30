// 习题6-2 使用函数求特殊a串数列和

#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
    
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int fn(int a, int n) {
    int res = 0, len = 1;

    for(int i = 1; i <= n; i++) {
        res += a * len;
        len *= 10;
    }
    
    return res;
}

int SumA(int a, int n) {
    int res = 0;
    
    for(int i = 1; i <= n; i++) {
        res += fn(a, i);
    }
    
    return res;
}