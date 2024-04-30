// 习题4-8 高空坠球

#include <stdio.h>

int main()
{
    double high, len;
    int n;
    scanf("%lf%d", &high, &n);

    // 为什么要写？  不写明明输出的也是0.0 0.0
    if(n == 0) {
        printf("0.0 0.0\n");
        return 0;
    }
    
    len = high;
    for(int i = 1; i < n; i++) {
        len += high;
        high /= 2;
    }
    high /= 2;

    printf("%.1lf %.1lf\n", len, high);

    return 0;
}