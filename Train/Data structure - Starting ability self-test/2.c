#include <stdio.h>
#include <math.h>

int Judge_SuShu(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N, i, res = 0;

    scanf("%d", &N);
    
    for (i = 3; i <= N - 2; i += 2) {
        if (Judge_SuShu(i) && Judge_SuShu(i + 2)) {
            res++;
        }
    }

    printf("%d", res);
    
    return 0;
}