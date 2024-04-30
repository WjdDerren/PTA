// 练习4-6 猜数字游戏

#include <stdio.h>

int main()
{
    int i, input, right, N, flag = 0;
    scanf("%d%d", &right, &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &input);
        if(input < 0) {
            break;
        } else if(input > right) {
            printf("Too big\n");
        } else if(input < right) {
            printf("Too small\n");
        } else if(input == right) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) {
        printf("Game Over\n");
    } else {
        if(i == 0) {
            printf("Bingo!\n");
        } else if(i < 3) {
            printf("Lucky You!\n");
        } else if(i < N) {
            printf("Good Guess!\n");
        } else {
            printf("Game Over\n");
        }
    }
    
    return 0;
}