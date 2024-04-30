// 练习2-18 求组合数

#include <stdio.h>

double fact(int n)
{
    if(n <= 1) {
        return 1;
    }
    
    double res = 1;
    for(int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main()
{
    double res;
    int m, n;
    scanf("%d%d", &m, &n);

    res = fact(n) / (fact(m) * fact(n - m));
    
    printf("result = %.0lf\n", res);
    
    return 0;
}