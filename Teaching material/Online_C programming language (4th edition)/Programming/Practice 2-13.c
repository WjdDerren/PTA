// 练习2-13 求N分之一序列前N项和

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    double sum = 0;
    for(int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    printf("sum = %lf\n", sum);
    
    return 0;
}