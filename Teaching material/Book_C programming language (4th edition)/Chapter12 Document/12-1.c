// 统计文本文件中各类字符个数。

#include <stdio.h>

int main() {
    char ch, *pathTXT = "data12-1.txt";
    FILE *fp = fopen(pathTXT, "r");
    if(!fp) {
        printf("File open error!\n");
        return 0;
    }

    int letter = 0, digit = 0, other = 0;
    while((ch = fgetc(fp)) != EOF) {
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            letter++;
        } else if(ch >= '0' && ch <= '9') {
            digit++;
        } else {
            other++;
        }
    }

    printf("Letter: %d, digit: %d, other: %d\n", letter, digit, other);

    fclose(fp);

    return 0;
}