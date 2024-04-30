// 习题7-6 统计大写辅音字母

#include <stdio.h>
#include <string.h>

int main() {
    char str[81];
    int n = 0;

    gets(str);

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
                n++;
            }
        }
    }

    printf("%d", n);

    return 0;
}