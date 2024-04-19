// 分类统计字符个数：输入一行字符，统计其中的英文字母、空格、数字和其他字符的个数。

#include <stdio.h>

int main()
{
    char str[10000];
    scanf("%[^\n]s", str);
    int letter = 0, blank = 0, digit = 0, other = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            letter++;
        } else if(str[i] == ' ') {
            blank++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else {
            other++;
        }
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);

    return 0;
}