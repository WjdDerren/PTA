// 习题9-1 时间换算

#include <stdio.h>

int main() {
    int h, m, s, n;

    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &n);
    s = (s + n);
    if(s >= 60) {
        s %= 60;
        m++;
    }
    if(m >= 60) {
        m %= 60;
        h++;
    }
    if(h >= 24) {
        h %= 24;
    }

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}