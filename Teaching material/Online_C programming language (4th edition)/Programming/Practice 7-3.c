// 练习7-3 将数组中的数逆序存放

#include <stdio.h>

int main()
{
    int n, num[10], temp;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n / 2; i++) {
        temp = num[i];
        num[i] = num[n - 1 - i];
        num[n - 1 - i] = temp;
    }

    printf("%d", num[0]);
    for(int i = 1; i < n; i++) {
        printf(" %d", num[i]);
    }

    return 0;
}