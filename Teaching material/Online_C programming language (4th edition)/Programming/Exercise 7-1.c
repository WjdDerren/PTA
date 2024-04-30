// 习题7-1 选择法排序

#include <stdio.h>

void ChooseSort(int a[], int n) {
    int i, j, max, temp;
    for(i = 0; i < n - 1; i++) {
        max = i;
        for(j = i + 1; j < n; j++) {
            if(a[max] < a[j]) {
                max = j;
            }
        }
        if(max != 0) {
            temp = a[max];
            a[max] = a[i];
            a[i] = temp;
        }
    }
}

int main() {
    int i, n, a[10];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ChooseSort(a, n);

    printf("%d", a[0]);
    for(i = 1; i < n; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}