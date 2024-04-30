// 拆分实数的整数与小数部分：要求自定义一个函数 void splitfloat(float x, int *intpart, float *fracpart)
// 其中x是被拆分的实数，*intpart 和 *fracpart 分别是将实数x拆分出来的整数部分与小数部分。
// 编写主函数，并在其中调用函数 splitfloat()。

#include <stdio.h>

void splitfloat(float x, int *intpart, float *fracpart) {
    *intpart = (int)x;
    *fracpart = x - *intpart;
}

int main() {
    float x, fracpart;
    int intpart;
    
    printf("Input X: ");
    scanf("%f", &x);

    splitfloat(x, &intpart, &fracpart);
    printf("intpart = %d\nfracpart = %f", intpart, fracpart);

    return 0;
}