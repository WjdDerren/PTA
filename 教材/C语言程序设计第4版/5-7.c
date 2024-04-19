// 使用函数求余弦函数的近似值：输入精度 e，用下列公式求 cosx 的近似值，精确到最后一项的绝对值小于 e。
// 要求定义和调用函数 funcos(e, x) 求余弦函数的近似值。
// cosx = x^0 / 0! - x^2 / 2! + x^4 / 4! - x^6 / 6! +...

#include <stdio.h>

double funcos(double e, double x);

int main()
{
    double e, x;
    scanf("%lf%lf", &e, &x);

    printf("%lf\n", funcos(e, x));

    return 0;
}

double funcos(double e, double x)
{
    double res = 0, flag = 1.0, temp = 1.0, sum = 0;
    int i = 1;

    while(temp >= e) {
        sum += flag * temp;
        temp *= x * x / (i * (i + 1));
        flag = -flag;
        i += 2;
    }
    sum += flag * temp;

    return sum;
}