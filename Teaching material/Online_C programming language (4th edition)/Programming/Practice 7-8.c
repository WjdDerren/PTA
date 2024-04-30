// 练习7-8 方阵循环右移

#include <stdio.h>

void change(int num[], int left, int right) {
    int i = left, j = right - 1, temp;
    for(; i < j; i++, j--) {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
}

int main() {
    int m, n, i, j, num[6][6];

    scanf("%d %d", &m, &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    m = m % n;
    for(i = 0; i < n; i++) {
        change(num[i], 0, n);
        change(num[i], m, n);
        change(num[i], 0, m);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", num[i][j]);
        }
        if(i != n - 1) {
            printf("\n");
        }
    }

    return 0;
}