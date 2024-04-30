// 比较两个文本文件是否相等：输出两个文件中第一次出现不同字符内容的行号及列值。

#include <stdio.h>

void printFileContents(char *path) {
    FILE *fp = fopen(path, "r");
    if(!fp) {
        printf("File open error!\n");
        return;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

int main() {
    char *path1 = "data12-3.txt", *path2 = "data12-2.txt";
    FILE *fp1 = fopen(path1, "r"), *fp2 = fopen(path2, "r");
    if(!fp1 || !fp2) {
        printf("File open error!\n");
        return 0;
    }

    printf("The first file:\n");
    printFileContents(path1);
    printf("The second file:\n");
    printFileContents(path2);

    char ch1, ch2;
    int row1 = 1, row2 = 1, array1 = 1, array2 = 1, flagEnd = 0;
    
    while(!feof(fp1) || !feof(fp2)) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if(ch1 == EOF || ch2 == EOF) {
            flagEnd = 1;
            break;
        }
        if(ch1 == '\n') {
            row1++;
            array1 = 1;
        }
        if(ch2 == '\n') {
            row2++;
            array2 = 1;
        }
        if(ch1 != ch2) {
            printf("Different at row:%d, array:%d\n", row1, array1);
            break;
        }
    }

    if(flagEnd == 1) {
        printf("The two files are same.\n");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}