// 输入4个整数，求和与平均值，其中平均值精确到小数点后1位

#include <stdio.h>

int main()
{

    int i, n, sum = 0;
    double average;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &n);
        sum += n;
    }

    average = sum * 1.0 / 4;
    
    printf("sum=%d#average=%.1lf\n", sum, average);

    return 0;
}