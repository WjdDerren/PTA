// 练习2-10 计算分段函数[1]

#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf", &x);

    if(x == 0) {
        y = 0;
    } else {
        y = 1.0 / x;
    }

    printf("f(%.1lf) = %.1lf\n", x, y);

    return 0;
}