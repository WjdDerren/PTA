// 习题6-8 单词首字母大写

#include <stdio.h>

int main()
{
    char str[10000];
    int flag = 0;
    scanf("%[^\n]s", str);
    
    for(int i = 0; str[i] != '\n'; i++) {
        if(flag == 0) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                flag = 1;
                continue;
            }
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
                flag = 1;
            }
        }
        if(str[i] == ' ') {
            flag = 0;
        }
    }
    printf("%s\n", str);

    return 0;
}