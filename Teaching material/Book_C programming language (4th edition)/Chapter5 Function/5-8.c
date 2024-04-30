// 输入一个正整数 n，输出 n 行空心的数字金字塔。
// 要求定义和调用函数 hollow_pyramid(n) 输出 n 行空心的数字金字塔。
// 当 n = 5 时：
//     1
//    2 2
//   3   3
//  4     4
// 555555555

#include <stdio.h>

void hollow_pyramid(int n);

int main()
{
    int n;
    scanf("%d", &n);

    hollow_pyramid(n);

    return 0;
}

void hollow_pyramid(int n)
{
    for(int i = 1; i < n; i++) {
        for(int j = n; j > i; j--) {
            printf(" ");
        }
        printf("%d", i);
        for(int j = 1; j <= (i - 1) * 2 - 1; j++) {
            printf(" ");
        }
        if(i == 1) {
            printf("\n");
        } else {
            printf("%d\n", i);
        }
    }
    for(int i = 0; i < n * 2 - 1; i++) {
        printf("%d", n);
    }
}