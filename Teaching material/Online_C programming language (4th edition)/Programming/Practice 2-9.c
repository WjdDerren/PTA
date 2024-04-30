// 练习2-9 整数四则运算

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    
    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d - %d = %d\n", A, B, A - B);
    printf("%d * %d = %d\n", A, B, A * B);
    printf("%d / %d = %d\n", A, B, A / B);

    return 0;
}