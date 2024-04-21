// 删除字符：输入一个字符串，再输入一个字符 ch，
// 将字符串中所有的 ch 字符删除后输出该字符串。
// 要求定义和调用函数 delchar(s, c)。

#include <stdio.h>

void delchar(char *s, char c) {
    int i = 0, j = 0;
    while(*(s + i) != '\0') {
        while(*(s + i) == c) {
            i++;
        }
        *(s + j) = *(s + i);
        i++;
        j++;
    }
    *(s + j) = '\0';
}

int main(){
    char s[100], ch;

    printf("Input the string s: ");
    gets(s);
    printf("Input the ch: ");
    scanf("%c", &ch);

    delchar(s, ch);
    puts(s);
    return 0;
}