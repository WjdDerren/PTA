// 字符串的连接：输入两个字符串，输出连接后的字符串。
// 要求定义函数 char *strcat(char *s, char *t)，
// 将字符串 t 复制到字符串 s 的末端，并且返回字符串 s 的首地址。

#include <stdio.h>

char *strcat(char *s, char *t) {
    int i = 0, j = 0;
    while(s[i++] != '\0');
    s[i - 1] = ' ';
    while(t[j] != '\0') {
        s[i++] = t[j++];
    }
    s[i] = '\0';

    return s;
}

int main() {
    char s[20] = "hello", t[] = "world";

    printf("%s\n", strcat(s, t));

    return 0;
}