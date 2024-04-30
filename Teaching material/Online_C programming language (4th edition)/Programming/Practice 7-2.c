// 练习7-2 求最大值及其下标

#include <stdio.h>

int main()
{
    int n, x, max, flag = 0, i;
    scanf("%d", &n);
    
    scanf("%d", &x);
    max = x;
    for(i = 1; i < n; i++) {
        scanf("%d", &x);
        if(max < x) {
            max = x;
            flag = i;
        }
    }

    printf("%d %d\n", max, flag);

    return 0;
}