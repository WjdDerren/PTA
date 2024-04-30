// 计算最长的字符串长度：输入 n(n<10) 个字符串，
// 输出其中长度最长字符串的有效长度。
// 要求自定义函数 int max_len(char *s[], int n)，
// 用于计算有 n 个元素的指针数组 s 中最长的字符串的长度。

#include <stdio.h>
#include <string.h>

int max_len(char *s[], int n) {
    int max = 0, i;

    for(i = 1; i < n; i++) {
        if(strlen(s[max]) < strlen(s[i])) {
            max = i;
        }
    }

    return strlen(s[max]);
}

int main() {
    char s[10][100], *ptr[10];
    int n, i;

    printf("Input the n: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        fgets(s[i], sizeof(s[i]), stdin);
        if (s[i][strlen(s[i]) - 1] == '\n') {
            s[i][strlen(s[i]) - 1] = '\0'; // 去除字符串末尾的换行符
        }
        ptr[i] = s[i];
    }

    printf("The longest string is %d\n", max_len(ptr, n));

    return 0;
}