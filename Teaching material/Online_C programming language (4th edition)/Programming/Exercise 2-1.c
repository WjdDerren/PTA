// 习题2-1 求整数均值

#include <stdio.h>

int main()
{
    int a, b, c, d;
    double average, sum = 0;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    sum = a + b + c + d;
    average = sum / 4;

    printf("Sum = %.0lf; Average = %.1lf", sum, average);
        
     return 0;
}