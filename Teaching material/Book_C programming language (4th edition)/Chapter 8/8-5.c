// 使用函数实现字符串复制：输入一个字符串 t 和一个正整数 m，
// 将字符串 t 中从第 m 个字符开始的全部字符复制到字符串 s 中，再输出字符串 s。
// 要求自定义并调用函数 void strmcpy(char *s, char *t, int m).

#include <stdio.h>

void strmcpy(char *s, char *t, int m) {
    int i = 0;
    while(*(t + m - 1) != '\0') {
        *s++ = *(t + m - 1);
        t++;
    }
    *s = '\0';
}

int main() {
    char t[100], s[100];
    int m;
    
    printf("Input the string t: ");
    gets(t);
    printf("Input the m: ");
    scanf("%d", &m);

    strmcpy(s, t, m);

    puts(s);

    return 0;
}