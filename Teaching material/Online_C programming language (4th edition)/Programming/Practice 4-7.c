// 练习4-7 求e的近似值

#include <stdio.h>

int main()
{
    int n;
    double sum = 1, temp = 1;
    scanf("%d", &n);
    
    for(int i = 1; i <= n ; i++) {
        temp /= i;
        sum += temp;
    }

    printf("%.8lf\n", sum);

    return 0;
}