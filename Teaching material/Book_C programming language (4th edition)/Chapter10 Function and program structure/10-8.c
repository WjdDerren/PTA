// 递归实现顺序输出整数：输入一个正整数 n，对其进行按位顺序输出。

#include <stdio.h>

void Print(int n) {
    if(n == 0) {
        return;
    } else {
        Print(n / 10);
        printf("%d", n % 10);
    }
}

int main() {
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    Print(n);

    return 0;
}