// 选择排序法。输入一个正整数 n(1<n<=10)，再输入 n 个整数，将他们从大到小排序后输出。

#include <stdio.h>

int main()
{
    int i, j, i_min, min, n, num[10];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    
    for(i = 0; i < n; i++) {
        min = num[i];
        i_min = i;
        for(j = i; j < n; j++) {
            if(min > num[j]) {
                min = num[j];
                i_min = j;
            }
        }
        if(j >= n) {
            num[i_min] = num[i];
            num[i] = min;
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}