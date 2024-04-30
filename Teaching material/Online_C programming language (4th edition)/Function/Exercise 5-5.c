// 习题5-5 使用函数统计指定数字的个数

#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number, int digit) {
    int res = 0;

    if(number == 0 && digit == 0) {
        return 1;
    } else if(number < 0) {
        number = -number;
    }
    while(number) {
        if(number % 10 == digit) {
            res++;
        }
        number /= 10;
    }
    
    return res;
}