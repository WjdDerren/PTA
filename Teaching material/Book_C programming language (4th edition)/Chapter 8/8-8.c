// 判断回文：判断输入的一串字符是否为“回文”。

#include <stdio.h>
#include <string.h>

void check(char *s) {
    int i = 0, len = strlen(s);
    while(i < len - 1 - i) {
        if(s[i] != s[len - 1 - i]) {
            break;
        }
        i++;
    }
    if(i >= len - 1 -i) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    char s[100];

    scanf("%s", &s);

    check(s);

    return 0;
}