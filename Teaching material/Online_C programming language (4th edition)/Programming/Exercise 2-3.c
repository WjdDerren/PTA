// 习题2-3 求平方与倒数序列的部分和

#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, i;
    double res = 0;
    scanf("%d%d", &m, &n);

    for(i = m; i <= n; i++) {
        res += pow(i, 2) + 1.0 / i;
    }

    printf("sum = %lf", res);

    return 0;
}