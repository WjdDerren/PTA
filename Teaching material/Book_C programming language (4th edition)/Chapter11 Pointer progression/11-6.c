// 查找子串：输入两个字符串 s 和 t，在字符串 s 中查找子串 t，输出起始位置，
// 若不存在，则输出 -1。
// 要求自定义函数 char *search(char *s, char *t)返回子串 t 的首地址，
// 若未找到，则返回 NULL。

#include <stdio.h>

char *search(char *s, char *t) {
    int i, j, flag;

    for(i = 0; s[i] != '\0'; i++) {
        flag = 0;
        for(j = 0; t[j] != '\0'; j++) {
            if(s[i + j] != t[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            return s + i;
        }
        if(s[i + j] == '\0') {
            return NULL;
        }
    }    
}

int main() {
    char s[20], t[10], *p;

    printf("Input the string s: ");
    scanf("%s", s);
    getchar();
    printf("Input the substring t: ");
    scanf("%s", t);
    getchar();
    
    p = search(s, t);
    if(p == NULL) {
        printf("-1\n");
    } else {
        printf("%d\n", p - s);
    }

    return 0;
}