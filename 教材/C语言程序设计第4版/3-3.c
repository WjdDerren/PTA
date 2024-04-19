// 起步里程 3 公里， 起步费 10 元；
// 超出起步里程后 10 公里内每公里 2 元；
// 超过 10 公里以上的部分，每公里 3 元；
// 临时停车每 5 分钟 2 元（不足 5 分钟则不收费）。
// 运价计费尾数四舍五入到元。
// 输入：行驶里程（公里）与等待时间（分钟），输出车费（元）

#include <stdio.h>

int main() {
    int km, res, min;

    printf("Please input km minutes:");
    scanf("%d%d", &km, &min);

    if(km <= 3) {
        res = 10;
    } else if(km <= 13) {
        res = 10 + (km - 3) * 2;
    } else {
        res = 10 + 10 * 2 +(km - 13) * 3;
    }
    if(min >= 5) {
        res += min / 5 * 2;
    }

    printf("车费: %d\n", res);
    return 0;
}