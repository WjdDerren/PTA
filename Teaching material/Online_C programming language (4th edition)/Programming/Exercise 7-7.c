// 习题7-7 字符串替换

#include <stdio.h>
#include <string.h>

int main() {
    char str[81];
    
    gets(str);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + 'Z' - str[i];
        }
    }

    puts(str);

    return 0;
}