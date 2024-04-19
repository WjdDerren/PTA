// 求序列和。输入两个正整数 a 和 n，求a+aa+aaa+aa...a(n个a)之和。
// 例如输入 2 和 3，输出 246(2+22+222)。

#include <stdio.h>

int main() {
    int a, n, res = 0, temp = 0;
    
    printf("Please input a and n: ");
    scanf("%d%d", &a, &n);

    for(int i = 1; i <= n; i++) {
        temp = temp * 10 + a;
        res += temp;
    }

    printf("The result is: %d\n", res);

    return 0;
}