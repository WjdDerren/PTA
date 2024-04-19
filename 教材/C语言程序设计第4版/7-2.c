// 求一批整数种出现最多的数字。输入一个正整数 n(1<n<=1000)，再输入 n 个整数，
// 分析每个整数的每一位数字，求出现次数最多的数字。
// 例如输入 3 个整数 1234、2345、3456，其中出现次数最多的数字是 3 和 4。

#include <stdio.h>

int main()
{
    int n, x, max, res[10] = {0};
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        while(x) {
            res[x%10]++;
            x /= 10;
        }
    }

    max = res[0];
    for(int i = 1; i < 10; i++) {
        if(max < res[i]) {
            max = res[i];
        }
    }

    for(int i = 0; i < 10; i++) {
        if(res[i] == max) {
            printf("%d ", i);
        }
    }

    return 0;
}