// 习题7-2 求一批整数中出现最多的个位数字

#include <stdio.h>

int main() {
    int i, n, x, digit[10] = {0}, maxAppear = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x == 0) {
            digit[0]++;
        } else {
            while(x) {
                digit[x % 10]++;
                x /= 10;
            }
        }
    }

    for(i = 0; i <= 9; i++) {
        if(maxAppear < digit[i]) {
            maxAppear = digit[i];
        }
    }

    printf("%d:", maxAppear);
    for(i = 0; i <= 9; i++) {
        if(maxAppear == digit[i]) {
            printf(" %d", i);
        }
    }

    return 0;
}