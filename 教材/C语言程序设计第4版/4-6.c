// 输出水仙花数。输入一个正整数 n（3<=n<=7），输出所有的 n 位水仙花数。
// 水仙花数：各位数字的 n 次幂之和等于它本身。

#include <stdio.h>
#include <math.h>

int main() {
    int res, n, temp;

    printf("Please input the n: ");
    scanf("%d", &n);

    for(int i = (int)pow(10, n - 1); i < (int)pow(10, n); i++) {
        temp = i;
        res = 0;
        while(temp) {
            res += (int)pow(temp % 10, n);
            temp /= 10;
        }
        if(res == i) {
            printf("%d ", res);
        }
    }

    return 0;
}