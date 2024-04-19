// 统计一行字符，将每个单词的首字母改为大写后输出。
// 所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

#include <stdio.h>

int main()
{
    char str[1000];
    int blank = 1;
    scanf("%[^\n]s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(blank == 1) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                blank = 0;
                continue;
            }
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
                blank = 0;
            }
        } else {
            if(str[i] == ' ') {
                blank = 1;
            }
        }
    }

    printf("%s\n", str);

    return 0;
}