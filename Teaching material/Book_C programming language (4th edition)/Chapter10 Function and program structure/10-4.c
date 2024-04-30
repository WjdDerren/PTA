// 递归求式子和：输入实数 x 和正整数 n，用递归的方法计算下列计算式子。
// f(x, n) = x - x^2 + x^3 - x^4+...+(-1)^(n-1)x^n.

#include <stdio.h>

double power(int x, int n) {
    double res = 1;

    if(n == 1) {
        return x;
    } else {
        res = x * power(x, n - 1);
    }

    return res;
}

double fun(int x, int n) {
    double flag;
    if(n == 0) {
        return 0;
    } else {
        if(n % 2 == 1) {
            flag = 1.0;
        } else {
            flag = -1.0;
        }
        return flag * power(x, n) + fun(x, n - 1);
    }
}

int main() {
    int x, n;

    printf("Input x, n:");
    scanf("%d %d", &x, &n);

    printf("result = %.0lf\n", fun(x, n));

    return 0;
}