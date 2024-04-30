// 习题4-10 猴子吃桃问题

#include <stdio.h>

int main()
{
    int N, i, sum = 1;
    scanf("%d", &N);

    for(i = 1; i < N; i++) {
        sum = (sum + 1) * 2;
    }

    printf("%d\n", sum);

    return 0;
}