// 练习2-11 计算分段函数[2]

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf", &x);
    
    if(x >= 0) {
        y = pow(x, 0.5);
    } else {
        y = pow(x + 1, 2) + 2 * x + 1.0 / x;
    }

    printf("f(%.2lf) = %.2lf\n", x, y);

    return 0;
}