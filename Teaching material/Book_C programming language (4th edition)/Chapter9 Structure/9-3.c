// 平面向量加法：输入两个二维平面向量 V1=(x1, y1) V2=(x2, y2)的分量，
// 计算并输出两个向量的和向量。

#include <stdio.h>

typedef struct Vector {
    double x, y;
} Vec;

Vec add(Vec V1, Vec V2) {
    Vec V;
    V.x = V1.x + V2.x;
    V.y = V1.y + V2.y;
    return V;
}

int main() {
    Vec V1, V2, V;
    
    printf("Input V1(x y): ");
    scanf("%lf %lf", &V1.x, &V1.y);
    printf("Input V2(x y): ");
    scanf("%lf %lf", &V2.x, &V2.y);

    V = add(V1, V2);
    printf("Result is : (%.2lf, %.2lf)\n", V.x, V.y);
    return 0;
}