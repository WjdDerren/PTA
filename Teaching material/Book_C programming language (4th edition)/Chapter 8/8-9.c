// 分类统计字符个数：输入一行文字，
// 统计其中的大写字母，小写字母，空格，数字以及其他字符各有多少。

#include <stdio.h>
#include <string.h>

void Statistics(char *s, int *big, int *small, int *num, int *other) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            (*big)++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            (*small)++;
        } else if(s[i] >= '0' && s[i] <= '9') {
            (*num)++;
        } else {
            (*other)++;
        }
    }
}

int main() {
    char s[100];
    int big = 0, small = 0, num = 0, other = 0;

    scanf("%[^\n]s", s);

    Statistics(s, &big, &small, &num, &other);

    printf("The num of big is : %d\n", big);
    printf("The num of small is : %d\n", small);
    printf("The num of num is : %d\n", num);
    printf("The num of other is : %d\n", other);

    return 0;
}