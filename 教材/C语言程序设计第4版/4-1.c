// 求奇数和。输入一批正整数（以0或负数为结束标志）。

#include <stdio.h>

int main() {
    int sum = 0, x;

    printf("Please input until 0 or fushu:\n");
    scanf("%d", &x);
    while(x > 0) {
        if(x % 2 == 1) {
            sum += x;
        }
        scanf("%d", &x);
    }

    printf("The result is: %d\n", sum);

    return 0;
}