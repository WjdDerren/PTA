#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, a[12] = {1,2,3,4,5,6,7,8,9,10,11,12}, *p[4];

    for(i = 0; i < 4; i++) {
        p[i] = &a[i*3];
    }
    printf("%d\n", p[3][2]);

    return 0;
}