// 统计大写辅音字母。输入一个以回车结束的字符串（少于 80 个字符），统计并输出其中大写辅音字母的个数。
// 大写辅音字母是指除 A E I O U 以外的大写字母。

#include <stdio.h>

int main()
{
    char str[80];
    int count = 0;

    scanf("%[^\n]s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'B' && str[i] <= 'Z' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}