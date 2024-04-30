// 习题7-3 判断上三角矩阵

#include <stdio.h>

int main() {
    int num, n, res[1000] = {0}, i_num, i, j, a[11][11], flag;

    scanf("%d", &num);

    for(i_num = 0; i_num < num; i_num++) {
        scanf("%d", &n);
        flag = 0;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
                if(i > j && flag == 0 && a[i][j] != 0) {
                    flag = 1;
                }
            }
        }
        if(flag == 0) {
            res[i_num] = 1;
        }
    }

    for(i = 0; i < num; i++) {
        if(res[i] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}