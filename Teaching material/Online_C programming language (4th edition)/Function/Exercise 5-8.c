// 习题5-8 空心的数字金字塔

#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid(int n) {
    for(int i = 1; i < n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        printf("%d", i);
        for(int k = 2; k < i * 2 - 1; k++) {
            printf(" ");
        }
        if(i != 1) {
            printf("%d", i);
        }
        printf("\n");
    }
    for(int i = 0; i < n * 2 - 1; i++) {
        printf("%d", n);
    }
}