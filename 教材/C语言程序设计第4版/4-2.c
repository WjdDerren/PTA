// 展开式求和。输入一个实数 x，直到最后一项的绝对值小于 0.00001，计算结果保留4位小数。
// 要求定义和调用函数fact(n)计算n的阶乘，可以调用pow()函数求幂。
// s = 1 + x + x^2/2! + x^3/3! + x^4/4! + ...

#include <stdio.h>
#include <math.h>

double fact(int n) {
    double res = 1;

    for(int i = 1; i <= n; i++) {
        res *= i;
    }

    return res;
}

int main() {
    double x, temp = 1, res = 0;
    int i = 1;
    printf("Please input the x: ");
    scanf("%lf", &x);

    while(fabs(temp) >= 0.00001) {
        res += temp;
        temp = 1.0 * pow(x, i) / fact(i++);
    }
    res += temp;

    printf("The s is: %.4lf\n", res);

    return 0;
}

/* 快速写法
int main() {
    double x, temp = 1, res = 0;
    int i = 1;
    scanf("%lf", &x);

    while(fabs(temp) >= 0.00001) {
        res += temp;
        temp = temp * x / i++;
    }
    res += temp;

    printf("The s is: %.4lf\n", res);

    return 0;
}
*/