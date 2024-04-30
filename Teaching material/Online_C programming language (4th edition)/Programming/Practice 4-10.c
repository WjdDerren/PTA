// 练习4-10 找出最小值

#include <stdio.h>

int main()
{
    int n, input, small, i = 1;
    scanf("%d", &n);

    scanf("%d", &input);
    small = input;
    for(i = 1; i < n; i++) {
        scanf("%d", &input);
        if(small > input) {
            small = input;
        }
    }

    printf("min = %d\n", small);

    return 0;
}