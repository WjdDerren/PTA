// 习题3-3 出租车计价

#include <stdio.h>

int main()
{
    double km, money = 0;
    int minutes;
    scanf("%lf%d", &km, &minutes);

    if(km <= 3) {
        money = 10;
    } else if(km <= 10) {
        money = 10 + (km - 3) * 2;
    } else {
        money = 10 + 7 * 2 + (km - 10) * 3;
    }
    money += minutes / 5 * 2;

    printf("%.0lf\n", money);
    
    return 0;
}