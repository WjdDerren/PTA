// 输入 n(n<10) 个整数，统计其中素数的个数。要求程序由两个文件组成，
// 一个文件中编写 main 函数，另一个文件中编写素数判断的函数。

#include <stdio.h>
#include <math.h>
#include "Prime.c"

int main() {
    int n, x, count = 0;

    printf("Input n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(Prime(x) == 1) {
            printf("%d ", x);
            count++;
        }
    }

    printf("\nThe number of prime is %d\n", count);

    return 0;
}