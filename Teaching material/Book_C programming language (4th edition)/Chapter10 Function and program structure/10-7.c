// 递归实现十进制转换二进制：输入一个整数 n，将其转换为二进制后输出。
// 要求定义并调用函数 dectobin(n)，它的功能是输出 n 的二进制。

#include <stdio.h>

void dectobin(int n) {
    if(n == 0) {
        return;
    } else {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    dectobin(n);

    return 0;
}