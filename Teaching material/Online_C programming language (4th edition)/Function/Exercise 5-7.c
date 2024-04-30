// 习题5-7 使用函数求余弦函数的近似值

#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x) {
    double temp = 1.0, flag = 1.0, res = 0;
    int i = 1;
    
    while(temp >= e) {
        res += flag * temp;
        flag = -flag;
        temp *= x * x / (i * (i + 1));
        i += 2;
    }
    res += flag * temp;
        
    return res;
}