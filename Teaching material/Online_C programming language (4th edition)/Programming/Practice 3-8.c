// 练习3-8 查询水果价格

#include <stdio.h>

int main()
{
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");

    int input;
    double money;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &input);
        if(input == 0) {
            break;
        } else {
            printf("price = ");
            switch(input) {
                case 1: money = 3; break;
                case 2: money = 2.5; break;
                case 3: money = 4.1; break;
                case 4: money = 10.2; break;
                default: money = 0; break;
            }
            printf("%.2lf\n", money);
        }
    }

    return 0;
}