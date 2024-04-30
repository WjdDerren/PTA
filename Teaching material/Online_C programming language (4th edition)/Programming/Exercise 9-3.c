// 习题9-3 平面向量加法

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double x = round((x1 + x2) * 10) / 10;
    double y = round((y1 + y2) * 10) / 10;

    if(x == 0 && signbit(x)) {
        x = -x;
    }
    if(y == 0 && signbit(y)) {
        y = -y;
    }

    printf("(%.1lf, %.1lf)", x, y);

    return 0;
}