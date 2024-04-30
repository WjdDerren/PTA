// 习题6-4 使用函数输出指定范围内的Fibonacci数

#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n) {
    if(n <= 2) {
        return 1;
    }
    
    int f1 = 1, f2 = 1, temp;
    for(int i = 3; i <= n; i++) {
        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
    }

    return f2;
}

void PrintFN(int m, int n) {
    int first = 1, i = 1, count = 0;

    while(1) {
        if(fib(i) >= m && fib(i) <= n) {
            count++;
            if(first) {
                printf("%d", fib(i));
                first = 0;
            } else {
                printf(" %d", fib(i));
            }
        }
        if(fib(i) > n) {
            break;
        }
        i++;
    }

    if(count == 0) {
        printf("No Fibonacci number");
    }
}