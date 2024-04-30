// 习题4-1 求奇数和

#include <stdio.h>

int main()
{
    int input, sum = 0;
    while(1) {
        scanf("%d", &input);
        if(input <= 0) {
            break;
        }
        if(input % 2 == 1) {
            sum += input;
        }
    }

    printf("%d\n", sum);

    return 0;
}