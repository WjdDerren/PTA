// 练习2-12 输出华氏-摄氏温度转换表

#include <stdio.h>

int main()
{
    double C;
    int lower, upper;
    scanf("%d%d", &lower, &upper);

    if(lower > upper) {
        printf("Invalid.\n");
        return 0;
    }

    printf("fahr celsius\n");
    for(int i = lower; i <= upper; i += 2) {
        C = 5.0 * (i - 32) / 9;
        printf("%d%6.1lf\n", i, C);
    }

    return 0;
}