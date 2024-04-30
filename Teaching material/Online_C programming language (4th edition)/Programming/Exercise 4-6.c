// 习题4-6 水仙花数

#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, j, x, n, sum, start = 1, end, temp;
    scanf("%d", &N);
    for(i = 0; i < N - 1; i++) {
        start *= 10;
    }
    end = start * 10;

    sum = 0;
    for(i = start; i < end; i++) {
        n = i;
        if(sum >= end) {
            break;
        }
        if(sum > i) {
            i = sum;
        }
        while(n) {
            x = n % 10;
            n /= 10;
            temp = 1;
            for(j = 0; j < N; j++) {
                temp *= x;
            }
            sum += temp;
        }
        if(i == sum) {
            printf("%d\n", i);
        }
        sum = 0;
    }

    return 0;
}