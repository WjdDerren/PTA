// 递归计算函数 ack(m, n)：输入 m 和 n，编写递归函数计算 Ackermenn 函数的值
//           = n + 1                    m = 0
// ack(m, n) = ack(m - 1, 1)            n=0 && m>0
//           = ack(m - 1, ack(m, n -1)) m>0 && n>0

#include <stdio.h>

int ack(int m, int n) {
    if(m == 0) {
        return n + 1;
    } else if(m > 0 && n == 0) {
        return ack(m - 1, 1);
    } else if(m > 0 && n > 0) {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main() {
    int m, n;

    printf("Input m, n: ");
    scanf("%d %d", &m, &n);

    printf("Ackerman(%d, %d) = %d\n", m, n, ack(m, n));

    return 0;
}