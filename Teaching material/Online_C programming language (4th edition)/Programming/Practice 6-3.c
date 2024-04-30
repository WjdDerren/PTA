// 练习6-3 英文字母替换加密（大小写转换+后移1位）

#include <stdio.h>

int main()
{
    char str[100000];
    scanf("%[^\n]s", str);
    
    for(int i = 0; str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] < 'z') {
            str[i] -= 31;
        } else if(str[i] == 'z') {
            str[i] = 'A';
        } else if(str[i] >= 'A' && str[i] < 'Z') {
            str[i] += 33;
        } else if(str[i] == 'Z') {
            str[i] = 'a';
        }
        printf("%c", str[i]);
    }

    return 0;
}