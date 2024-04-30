// 输入一个正整数n，计算交错序列的前n项之和。1-2/3+3/5-4/7……

#include <stdio.h>

int main() {
    int n, i;
    double res = 1, flag = -1;

    printf("Please input the n(n>=1):");
    scanf("%d", &n);

    if (n != 1) {
        for (i = 2; i <= n; i++) {
            res += flag * i / (2 * i - 1);
            flag = -flag;
        }
    }
    
    printf("The result is %lf\n", res);
    return 0;
}