// 输出月份英文名：要求用指针数组表示 12 个月的英文名称。
// 例如，输入 5，输出 May。

#include <stdio.h>

int main() {
    char *moneth[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;

    printf("Input the n: ");
    scanf("%d", &n);

    printf("%s\n", moneth[n - 1]);

    return 0;
}