// 练习2-14 求奇数分之一序列前N项和

#include <stdio.h>

int main()
{
    double sum = 0;
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N * 2; i += 2) {
        sum += 1.0 / i;
    }

    printf("sum = %lf\n", sum);
    
    return 0;
}