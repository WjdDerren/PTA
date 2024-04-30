// 习题3-5 三角形判断

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, len, area, temp, s;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if(a + b <= c) {
        printf("Impossible\n");
    } else {
        len = a + b +c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) *  (s - b) * (s - c));
        printf("L = %.2lf, A = %.2lf\n", len, area);
    }

    return 0;
}