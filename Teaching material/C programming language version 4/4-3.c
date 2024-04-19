// 求序列和。输入一个正整数 n，输出2/1+3/2+5/3+8/5+...的前 n项之和。保留2位小数。

#include <stdio.h>

int main() {
    double res, temp;
    int f1 = 1, f2 = 2, n;
    
    printf("Please input the n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        temp = 1.0 * f2 / f1;
        res += temp;
        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
    }

    printf("The result is: %.2lf\n", res);

    return 0;
}