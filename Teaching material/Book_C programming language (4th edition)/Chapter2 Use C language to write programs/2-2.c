// 每月电量<=50kW·h，电价0.53元/kW·h，超出部分每千瓦时上调0.05元。
// 输入用户的月用电量kW·h，输出电费，若用电量小于0，输出”Invalid Value！“

#include <stdio.h>

int main() {
    double input, res;

    printf("请输入月用电量（千瓦时）：");
    scanf("%lf", &input);

    if (input < 0) {
        printf("Invalid Value!\n");
        return 0;
    } else if (input <= 50) {
        res = input * 0.53;
    } else if (input > 50) {
        res = 50 * 0.53 + (input - 50) * 0.58;
    }

    printf("电费 = %.2lf 元\n", res);
    
    return 0;
}
