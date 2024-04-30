// 习题4-4 特殊a串数列求和

#include <stdio.h>

int main()
{
    int a, n;
    double res, temp = 0;
    scanf("%d%d", &a, &n);
    for(int i = 0; i < n; i++) {
        temp = temp * 10 + a;
        res += temp;
    }

    printf("s = %.0lf\n", res);

    return 0;
}