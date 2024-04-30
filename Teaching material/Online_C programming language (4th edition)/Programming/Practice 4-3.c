// 练习4-3 求给定精度的简单交错序列部分和

#include <stdio.h>

int main()
{
    double i = 1, sum = 0, eps, temp = 1, flag = 1.0;
    scanf("%lf", &eps);

    do {
        temp = 1.0 / i;
        sum += flag * temp;
        i += 3;
        flag = -flag;
    } while(temp > eps);

    printf("sum = %lf\n", sum);

    return 0;
}