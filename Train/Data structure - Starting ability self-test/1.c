#include <stdio.h>

int main() {
    int i, j, deep;
    int N = 16, res_N = 0, sum = 0;
    char ch;

    scanf("%d %c", &N, &ch);
    
    if (N < 7) {
        deep = 1;
        sum = 1;
        res_N = N - sum;
    } else {
        for (deep = 2; deep < N; deep++) {
            sum = (1 + 1 + (deep - 1) * 2) * deep / 2 * 2 - 1;
            if (sum == N) {
                break;
            }
            if (sum > N) {
                deep--;
                sum = (1 + 1 + (deep - 1) * 2) * deep / 2 * 2 - 1;
                break;
            }
        }
        res_N = N - sum;
    }
    
    for (i = deep; i > 0; i--) {
        for (j = deep; j > i; j--) {
            printf(" ");
        }
        for (j = 1 + 2 * (i - 1); j > 0; j--) {
            printf("%c", ch);
        }
        printf("\n");
    }
    for (i = 1; i < deep; i++) {
        for (j = i + 1; j < deep; j++) {
            printf(" ");
        }
        for (j = 1; j <= 1 + 2 * i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    
    printf("%d", res_N);

    return 0;
}