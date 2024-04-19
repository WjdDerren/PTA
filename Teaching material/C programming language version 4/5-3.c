// 使用函数计算两点间的距离：给定平面任意两点坐标(x1, y1)和(x2, y2)，求这两点之间的距离（保留 2 位小数）。
// 要求定义和调用函数 dist(x1, y1, x2, y2)计算两点间的距离。

#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    printf("%.2lf\n", dist(x1, y1, x2, y2));

    return 0;
}

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}