// 习题4-7 最大公约数和最小公倍数

#include <stdio.h>

int main()
{
    int M, N, a, b, temp;
    scanf("%d%d", &M, &N);
    
    a = M;
    b = N;
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    while(1) {
        temp = a % b;
        if(temp == 0) {
            break;
        }
        a = b;
        b = temp;
    }

    printf("%d %d\n", b, M * N / b);

    return 0;
}