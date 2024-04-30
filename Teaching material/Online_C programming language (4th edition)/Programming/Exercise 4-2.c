// 习题4-2 求幂级数展开的部分和

#include <stdio.h>

int main()
{
    int i = 1;
    double x, res = 1, temp = 1;
    scanf("%lf", &x);

    do {
        temp *= x / i;
        i++;
        res += temp;
    } while(temp >= 0.00001);

    printf("%.4lf\n", res);
    
    return 0;
}