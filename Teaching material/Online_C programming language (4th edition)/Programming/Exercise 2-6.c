// 习题2-6 求阶乘序列前N项和

#include <stdio.h>

int main()
{
    int N;
    double res = 0, temp = 1;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        temp *= i;
        res += temp;
    }

    printf("%.0lf\n", res);
    
    return 0;
}