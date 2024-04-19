// 超出本车道限速的 10% 则处 200 元罚款；若超出 50%，则吊销驾驶证。

#include <stdio.h>

int main() {
    double limit, speed;

    printf("Please input limit speed:");
    scanf("%lf%lf", &limit, &speed);

    if (speed <= limit * 1.1) {
        printf("OK\n");
    } else if (speed <= limit * 1.5) {
        printf("超速10%%,罚款200元\n");
    } else {
        printf("超速50%%,吊销驾驶证\n");
    }

    return 0;
}