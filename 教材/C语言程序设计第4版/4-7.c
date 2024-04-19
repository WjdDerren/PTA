// 求最大公约数和最小公倍数。输入两个正整数 m 和 n (m <= 1000, n <= 1000)

#include <stdio.h>

int main() {
    int m, n, temp, a, b;

    printf("Please input m and n: ");
    scanf("%d%d", &m, &n);
    
    if(m <= n) {
        a = n;
        b = m;
    } else {
        a = m;
        b = n;
    }

    temp = a % b;
    while(temp) {
        a = b;
        b = temp;
        temp = a % b;
    }

    printf("最大公约数: %d\n最小公倍数: %d\n", b, n * m / b);
    return 0;
}