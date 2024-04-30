// 习题7-8 字符串转换成十进制整数

#include <stdio.h>

int main() {
    char str[1000], ch;
    int result = 0, i = 0, j, flag = 0, temp;

    while((ch = getchar()) != '#') {
        if(i == 0 && ch == '-') {
            flag = 1;
        }
        if(ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'f' || ch >= 'A' && ch <= 'F') {
            str[i++] = ch;
        }
    }

    for(j = 0; j < i; j++) {
        if(str[j] >= '0' && str[j] <= '9') {
            temp = str[j] - '0';
        } else if(str[j] >= 'a' && str[j] <= 'f') {
            temp = str[j] - 'a' + 10;
        } else {
            temp = str[j] - 'A' + 10;
        }
        result = result * 16 + temp;
    }

    if(flag == 1) {
        result = -result;
    }
    printf("%d", result);

    return 0;
}