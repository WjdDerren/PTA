// 求矩阵各行元素之和。输入 2 个正整数 m 和 n(1<=m<=6, 1<=n<=6)，然后输入矩阵 a( m 行 n 列)中的元素，
// 分别求出各行元素之和，并输出。

#include <stdio.h>

int main()
{
    int m, n, a[6][6], sum[6];
    scanf("%d%d", &m, &n);

    for(int i = 0; i < m; i++) {
        sum[i] = 0;
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[m][n]);
            sum[i] += a[m][n];
        }
    }

    for(int i = 0; i < m; i++) {
        printf("%d\n", sum[i]);
    }
    
    return 0;
}