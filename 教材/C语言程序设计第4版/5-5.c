// 使用函数统计指定数字的个数：读入一个整数，统计并输出该数中“2”的个数。
// 要求定义并调用函数 countdigit(number, digit)。
// 例如，countdigit(12292, 2)的返回值是 3。

#include <stdio.h>

int countdigit(int number, int digit);

int main()
{
    int number, digit = 2;
    scanf("%d", &number);

    printf("%d\n", countdigit(number, digit));

    return 0;
}

int countdigit(int number, int digit)
{
    int count = 0;

    while(number) {
        if(digit == number % 10) {
            count++;
        }
        number /= 10;
    }

    return count;
}