// 练习7-10 查找指定字符

#include <stdio.h>
#include <string.h>

int findIndex(char str[], char ch) {
    int index = -1;

    for(int i = strlen(str); i >= 0; i--) {
        if(ch == str[i]) {
            return i;
        }
    }

    return index;
}

int main() {
    char ch, str[81];

    scanf("%c", &ch);
    getchar();
    gets(str);

    int res = findIndex(str, ch);
    if(res == -1) {
        printf("Not Found");
    } else {
        printf("index = %d", res);
    }

    return 0;
}