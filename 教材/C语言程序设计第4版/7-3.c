// 判断上三角矩阵。输入一个正整数 n(1<=n<=6)和 n 阶方阵 a 中的元素，如果 a 是上三角矩阵，输出“YES”，否则，输出“NO”。
// 上三角矩阵指主对角线以下的元素都为 0 的矩阵，主对角线为从矩阵的左上角至右下角的连线。

#include <stdio.h>

int main()
{
    int n, a[6][6], flag = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[i][j] != 0) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}