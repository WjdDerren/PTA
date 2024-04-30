// 练习2-17 生成3的乘方表

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {
        printf("pow(3,%d) = %.0lf\n", i, pow(3, i));
    }
    
    return 0;
}