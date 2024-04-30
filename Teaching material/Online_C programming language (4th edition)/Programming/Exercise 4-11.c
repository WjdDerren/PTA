// 习题4-11 兔子繁衍问题

#include <stdio.h>

int main()
{
    int N, i = 2, f1 = 1, f2 = 1, temp;
    scanf("%d", &N);

    if(N == 1) {
        printf("1\n");
        return 0;
    }
    
    while(f2 < N) {
        temp = f2;
        f2 += f1;
        f1 = temp;
        i++;
    }

    printf("%d\n", i);

    return 0;
}