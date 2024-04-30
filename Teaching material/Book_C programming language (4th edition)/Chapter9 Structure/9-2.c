// 计算两个复数之积：利用结构变量求解两个复数之积。

#include <stdio.h>

typedef struct plural {
    int real, imaginary;
} p_num;

p_num Cmult(p_num pn1, p_num pn2) {
    p_num res;

    res.real = pn1.real * pn2.real - pn1.imaginary * pn2.imaginary;
    res.imaginary = pn1.real * pn2.imaginary + pn1.imaginary * pn2.real;
    return res;
}

int main() {
    p_num pn1, pn2, pn;

    printf("Input the first Complex number(real imaginary): ");
    scanf("%d %d", &pn1.real, &pn1.imaginary);
    printf("Input the second Complex number(real imaginary): ");
    scanf("%d %d", &pn2.real, &pn2.imaginary);

    pn = Cmult(pn1, pn2);

    printf("(%d+%di) * (%d+%di) = %d+%di\n", pn1.real, pn1.imaginary, pn2.real, pn2.imaginary, pn.real, pn.imaginary);

    return 0;
}