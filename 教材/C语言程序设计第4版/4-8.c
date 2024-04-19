// 高空坠球。皮球从 height（米）高度自由落下，触地后反弹到原高度的一半，再落下，再反弹。
// 问皮球在第 n 次落地时，在空中一共经过多少距离？第 n 次反弹的高度是多少？ 输出保留1位小数。

#include <stdio.h>

int main() {
    int n;
    double height, res;

    printf("Please input height and n: ");
    scanf("%lf%d", &height, &n);
    
    res = height;
    for(int i = 1; i < n; i++) {
        res += height;
        height /= 2;
    }

    printf("在空中总路程: %.1lf\n第%d次反弹的高度: %.1lf\n", res, n, height);

    return 0;
}