// 练习2-15 求简单交错序列前N项和

#include <stdio.h>

int main()
{
    double sum = 0;
    int N, flag = 1;
    scanf("%d", &N);
    
    for(int i = 1; i <= N * 3; i += 3) {
        sum += flag * 1.0 / i;
        flag = -flag;
    }

    printf("sum = %.3lf\n", sum);
    
    return 0;
}