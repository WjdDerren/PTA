// 练习4-11 统计素数并求和

#include <stdio.h>
#include <math.h>

int isSushu(int n)
{
    if(n <= 1) {
        return 0;
    }
    
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int M, N, count = 0, sum = 0;
    scanf("%d%d", &M, &N);
    
    for(int i = M; i <= N; i++) {
        if(isSushu(i) == 1) {
            count++;
            sum += i;
        }
    }

    printf("%d %d\n",count, sum);

    return 0;
}