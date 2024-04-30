// 练习7-4 找出不是两个数组共有的元素

#include <stdio.h>

int main()
{
    int i, j, n_1, n_2, n1[20], n2[20], n[20], k, count = 0, first = 1;
    scanf("%d", &n_1);
    for(i = 0; i < n_1; i++) {
        scanf("%d", &n1[i]);
    }
    scanf("%d", &n_2);
    for(i = 0; i < n_2; i++) {
        scanf("%d", &n2[i]);
    }
    
    for(i = 0; i < n_1; i++) {
        for(j = 0; j < n_2; j++) {
            if(n1[i] == n2[j]) {
                break;
            }
        }
        if(j >= n_2) {
            for(k = 0; k < count; k++) {
                if(n1[i] == n[k]) {
                    break;
                }
            }
            if(k >= count) {
                n[count] = n1[i];
                count++;
                if(first == 1) {
                    printf("%d", n1[i]);
                    first = 0;
                } else {
                    printf(" %d", n1[i]);
                }
            }
        }
    }
    for(j = 0; j < n_2; j++) {
        for(i = 0; i < n_1; i++) {
            if(n2[j] == n1[i]) {
                break;
            }
        }
        if(i >= n_1) {
            for(k = 0; k < count; k++) {
                if(n2[j] == n[k]) {
                    break;
                }
            }
            if(k >= count) {
                n[count] = n2[j];
                count++;
                if(first == 1) {
                    printf("%d", n2[j]);
                    first = 0;
                } else {
                    printf(" %d", n2[j]);
                }
            }
        }
    }

    return 0;
}