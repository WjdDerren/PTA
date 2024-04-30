// 指定位置输出字符串：输入一个字符串后再输入两个字符，
// 输出此字符串中从与第 1 个字符匹配的位置开始到与
// 第 2 个字符匹配的位置结束的所有字符。
// 例如，输入字符串 program 与 2 个字符 r 和 g 后，输出 rog。
// 要求自定义函数 char *match(char *s, char ch1, char ch2)
// 返回结果字符串的首地址。

#include <stdio.h>
#include <stdlib.h>

char *match(char *s, char ch1, char ch2) {
    char *res = (char *)malloc(sizeof(char) * 20);
    int i = 0, j = 0, flag = 0;
    while(s[i] != '\0') {
        if(flag == 0 && s[i] == ch1) {
            flag = 1;
        }
        if(flag == 1) {
            res[j++] = s[i];
        }
        if(s[i] == ch2) {
            break;
        }
        i++;
    }
    res[j] = '\0';

    return res;
}

int main() {
    char s[20], ch1, ch2;

    printf("Input the string: ");
    scanf("%s", s);
    getchar();
    printf("Input the ch1, ch2: ");
    scanf("%c %c", &ch1, &ch2);

    printf("%s\n", match(s, ch1, ch2));

    return 0;
}