// 三角形面积为：其中 a,b,c 分别是三角形的 3 条边。
// area=sqrt(s*(s-a)*(s-b)*(s-c))  s=(a+b+c)/2
// 请分别定义计算 s 和 area 的宏，再使用函数实现。
// 比较两者在形式上和使用上的区别。

#include <stdio.h>
#include <math.h>

double cal_s(double a, double b, double c) {
    return (a + b + c)/2;
}

double cal_area(double a, double b, double c) {
    double s = cal_s(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;

    printf("Input a,b,c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("area = %.2lf\n", cal_area(a, b, c));

    return 0;
}