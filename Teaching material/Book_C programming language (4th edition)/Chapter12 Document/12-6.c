// 删除文件中的注释：
// 将 hello.c 文件中所有的注释去掉后存入另一个文件 new_hello.c

#include <stdio.h>

int main() {
    char *path_read = "hello.c", *path_write = "new_hello.c";
    FILE *fpr = fopen(path_read, "r");
    FILE *fpw = fopen(path_write, "w");
    if(!fpr || !fpw) {
        printf("File open error!\n");
        return 0;
    }

    char ch;
    int flag = 0;
    while((ch = fgetc(fpr)) != EOF) {
        if(flag == 0 && ch == '/') {
            flag = 1;
        } else if(flag == 1 && ch == '*') {
            flag = 2;
        } else if(flag == 2 && ch == '*') {
            flag = 3;
        } else if(flag == 3 && ch == '/') {
            flag = 0;
            ch = fgetc(fpr); // Skip the '/' after '*' in multi-line comment
        } else if(flag == 1 && ch == '/') {
            flag = 4;
        }  else if(flag == 4 && ch == '\n') {
            flag = 0;
            fputc(ch, fpw);
        } else if(flag == 0) {
            fputc(ch, fpw);
        }
    }

    fclose(fpr);
    fclose(fpw);
    
    printf("Comments removed successfully.\n");

    return 0;
}