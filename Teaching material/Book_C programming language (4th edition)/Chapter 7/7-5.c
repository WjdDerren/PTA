// 找鞍点。输入 1 个正整数 n(1<=n<=6)和 n 阶方程 a 中的元素，假设方阵 a 最多有 1 个鞍点，
// 如果找到 a 的鞍点，就输出其下标，否则，输出“NO”。
// 鞍点的元素值在该行上最大，在该列上最小。

#include <stdio.h>

int main()
{
    int i, j, k, n, a[6][6], i_res, j_res, res, flag = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    res = a[0][0];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(res < a[i][j]) {
                res = a[i][j];
                j_res = j;
            }
        }
        for(k = 0; k < n; k++) {
            if(res > a[k][j_res]) {
                break;
            }
        }
        if(k >= n) {
            flag = 1;
            i_res = i;
            break;
        }
    }

    if(flag == 1) {
        printf("%d %d\n", i_res, j_res);
    } else {
        printf("NO\n");
    }

    return 0;
}