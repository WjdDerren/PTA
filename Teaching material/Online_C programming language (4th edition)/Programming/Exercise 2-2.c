// 习题2-2 阶梯电价

#include <stdio.h>

int main()
{
    double kwh, money;
    scanf("%lf", &kwh);

    if(kwh < 0) {
        printf("Invalid Value!\n");
    } else {
        if(kwh <= 50) {
            money = 0.53 * kwh;
        } else {
            money = 0.53 * 50 + (kwh - 50) * 0.58;
        }
        printf("cost = %.2lf\n", money);
    }

    return 0;
}