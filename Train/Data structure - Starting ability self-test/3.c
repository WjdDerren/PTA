#include <stdio.h>

void fun(int num[], int left, int right) {
    int i = left, j = right - 1, temp;
    for(; i < j; i++, j--) {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    M = M % N;
    M = N - M;

    int num[100], i, temp;
    for(i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    fun(num, 0, M);
    fun(num, M, N);
    fun(num, 0, N);
    printf("%d", num[0]);
    for(i = 1; i < N; i++) {
        printf(" %d", num[i]);
    }

    return 0;
}