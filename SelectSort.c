// 选择排序
#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int a[10] = {1,3,5,7,9,8,6,4,2,0};
    int N = 10, i, j;
    for(i = 0; i < N; i++) {
        int max = 0;
        for(j = 0; j < N - i; j++) {
            if(a[max] < a[j]) {
                max = j;
            }
        }
        if(max != j - 1) {
            int temp = a[max];
            a[max] = a[j - 1];
            a[j - 1] = temp;
        }
    }

    for(i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}