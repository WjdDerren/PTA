// 输入3个数，按从小到大的顺序输出。

#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Please input a b c:");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);
    return 0;
}