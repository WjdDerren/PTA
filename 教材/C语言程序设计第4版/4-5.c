// 换硬币。将一笔零钱（大于8分，小于1元，精确到分）换成5分、2分和1分的硬币，每种硬币至少有一枚。
// 输入金额，问有几种换法？针对每一种换花，输出各种面额硬币的数量和硬币的总数量。

#include <stdio.h>

int main() {
    int n_five, n_two, n_one, n, money, count = 0;

    printf("Please input the money: ");
    scanf("%d", &money);

    for(n_five = 1; n_five <= money / 5; n_five++) {
        for(n_two = 1; n_two <= money / 2; n_two++) {
            n_one = money - n_five * 5 - n_two * 2;
            if(n_one >= 1) {
                count++;
                n = n_five + n_two + n_one;
                printf("5分: %d, 2分: %d, 1分: %d, 总个数: %d\n", n_five, n_two, n_one, n);
            }
        }
    }

    printf("一共有 %d 种换法。\n", count);

    return 0;
}