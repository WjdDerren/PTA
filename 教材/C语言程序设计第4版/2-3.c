// 序列求和，输入两个正整数m和n，0<m<=n，求i^2+1/i(m<=i<=n)

#include <stdio.h>

int main()
{
    int m, n, i;
    double res = 0;
    
    printf("Input m, n(0<m<=n):");
    scanf("%d%d", &m, &n);

    for (i = m; i <= n; i++) {
        res += i * i + 1.0 / i;
    }

    printf("%.6lf\n", res);
    
    return 0;
}