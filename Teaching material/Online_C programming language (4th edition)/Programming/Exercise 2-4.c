// 习题2-4 求交错序列前N项和

#include <stdio.h>

int main()
{
    int N;
    double flag = 1.0, res = 0;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        res += flag * i / (2 * i - 1);
        flag = -flag;
    }

    printf("%.3lf\n", res);

    return 0;
}