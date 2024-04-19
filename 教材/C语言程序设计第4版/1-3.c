// 求1～100中能被6整除的所有整数的和

#include <stdio.h>

int main() {
    int i, sum = 0;

    for(i = 1; i <= 100; i++) {
        if(i % 6 == 0){
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}