// 递归实现求 Fabonacci 数列：
// 用递归方法编写求斐波那契数列的函数，函数类型为整型。
// f(n)=f(n-2)+f(n-1)，其中 f(0)=1, f(1)=1.

#include <stdio.h>

int fab(int n) {
    if(n == 1 || n == 2) {
        return 1;
    } else {
        return fab(n - 2) + fab(n - 1);
    }
}

int main() {
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Result = %d\n", fab(n));

    return 0;
}