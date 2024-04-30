// 习题4-3 求分数序列前N项和

#include <stdio.h>

int main()
{
    int i, N;
    double res = 0, fenzi = 2, fenmu = 1, temp;
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        res += fenzi / fenmu;
        temp = fenzi;
        fenzi += fenmu;
        fenmu = temp;
    }

    printf("%.2lf\n", res);
    return 0;
}