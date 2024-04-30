// 练习7-7 矩阵运算

#include <stdio.h>

int main()
{
    int n, i, j, num[10][10], sum = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &num[i][j]);
            if(i == n - 1 || j == n - 1 || j == n - 1 - i) {
                continue;
            }
            sum += num[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}