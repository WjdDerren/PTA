// 字符串替换。输入一个以回车结束的字符串（少于 80 个字符），将其中的大写字母用下面列出的对应大写字母替换，
// 其余字符不变，输出替换后的字符串。
// A -> Z
// B -> Y
// C -> X
// D -> W
// ...
// X -> C
// Y -> B
// Z -> A

#include <stdio.h>

int main()
{
    char str[80];

    scanf("%[^\n]s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + 'Z' - str[i];
        }
    }

    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    
    return 0;
}