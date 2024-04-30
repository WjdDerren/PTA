// 报数：有 n 个人围成一圈，按顺序从 1 到 n 编号。
// 从第一个人开始报数，报道 m(m < n) 的人退出圈子。如此下去，直到留下最后一个人。
// 输入整数 n 和 m，并按退出顺序输出退出圈子的人的编号。

#include <stdio.h>

int main() {
    int n, m, i, j, a[100], count = 0, flag = 0;
    
    printf("Input n, m:");
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    while(n > 1) {
        i = 0;
        j = 0;
        while(i < n) {
            count++;
            if(count == m) {
                count = 0;
                printf("Out No. is %d\n", a[i]);
                flag++;
                i++;
            }
            a[j] = a[i];
            if(count != 0) {
                j++;
                i++;
            }
        }
        n = n - flag;
        flag = 0;
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    printf("Last No. is %d\n", a[0]);
    return 0;
}