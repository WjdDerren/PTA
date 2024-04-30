// 习题3-2 高速公路超速处罚

#include <stdio.h>

int main()
{
    int speed, limit;
    scanf("%d%d", &speed, &limit);

    if(speed * 10 >= limit * 15) {
        printf("Exceed %.0lf%%. License Revoked\n", (speed - limit) * 100.0 / limit);
    } else if(speed * 10 >= limit * 11){
        printf("Exceed %.0lf%%. Ticket 200\n", (speed - limit) * 100.0 / limit);
    } else {
        printf("OK\n");
    }
    
    return 0;
}