// 三角形判断，平面上任意三点坐标(x1, y1), (x2, y2), (x3, y3)。
// 如果能构成三角形，输出周长和面积（两位小数），否则输出“Impossible”
// area = sqrt(s * (s - a) * (s - b) * (s - c)), s = (a + b + c) / 2

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, len, area, temp, s;
    double x1, y1, x2, y2, x3, y3;

    printf("Please input the first point(x1, y1): ");
    scanf("%lf%lf", &x1, &y1);
    printf("Please input the second point(x2, y2): ");
    scanf("%lf%lf", &x2, &y2);
    printf("Please input the third point(x3, y3): ");
    scanf("%lf%lf", &x3, &y3);

    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    c = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
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
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        len = a + b + c;
        printf("The area is %.2lf\nThe lens is %.2lf\n", area, len);
    }

    return 0;
}