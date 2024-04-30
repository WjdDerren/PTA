// 习题4-5 换硬币

#include <stdio.h>

int main() {
    int n_five, n_two, n_one, n, money, count = 0;

    scanf("%d", &money);

    for(n_five = money / 5; n_five >= 1; n_five--) {
        for(n_two = money / 2; n_two >= 1; n_two--) {
            n_one = money - n_five * 5 - n_two * 2;
            if(n_one >= 1) {
                count++;
                n = n_five + n_two + n_one;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", n_five, n_two, n_one, n);
            }
        }
    }

    printf("count = %d\n", count);

    return 0;
}