// 习题8-1 拆分实数的整数与小数部分

#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;
    
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void splitfloat(float x, int *intpart, float *fracpart)
{
    int int_x = (int)x, wei = 1;
    
    while(int_x) {
        *intpart += int_x % 10 * wei;
        wei *= 10;
        int_x /= 10;
    }
    *fracpart = x - *intpart;
}