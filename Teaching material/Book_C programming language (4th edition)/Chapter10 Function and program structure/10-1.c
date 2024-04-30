// 判断满足条件的三位数：编写一个函数，利用参数传入一个 3 位数 n，
// 找出 101-n 间所有满足下列两个条件的数：
// 它是完全平方数，又有两位数字相同，如 144，676 等，
// 函数返回找出这样的数据的个数。

#include <stdio.h>
#include <math.h>

int Check(int n) {
    int count = 0, a, b, c, flag;

    for(int i = 101; i <= n; i++) {
        if((int)sqrt(i) * (int)sqrt(i) == i) {
            flag = 0;
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;
            if(a == b) {
                flag++;
            }
            if(a == c) {
                flag++;
            }
            if(b == c) {
                flag++;
            }
            if(flag == 1) {
                printf("%d\n", i);
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, res;

    printf("Input n: ");
    scanf("%d", &n);

    res = Check(n);

    printf("The num is %d\n", res);

    return 0;
}