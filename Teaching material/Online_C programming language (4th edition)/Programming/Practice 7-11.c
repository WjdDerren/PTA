// 练习7-11 字符串逆序

#include <stdio.h>
#include <string.h>

void func(char str[]) {
    int i = 0, j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[81];

    gets(str);
    func(str);
    puts(str);

    return 0;
}