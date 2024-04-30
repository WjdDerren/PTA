// 习题2-5 求平方根序列前N项和

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    double res = 0;
    scanf("%d", &N);

    for(double i = 1; i <= N; i++) {
        res += sqrt(i);
    }

    printf("sum = %.2lf\n", res);

    return 0;
}