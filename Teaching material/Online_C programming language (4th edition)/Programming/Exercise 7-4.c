// 习题7-4 求矩阵各行元素之和

#include <stdio.h>

int main() {
    int i, j, m, n, sum[7] = {0}, num[7][7];

    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &num[i][j]);
            sum[i] += num[i][j];
        }
    }

    for(i = 0; i < m; i++) {
        printf("%d\n", sum[i]);
    }


    return 0;
}