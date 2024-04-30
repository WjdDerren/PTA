// 将文件中的数据求和并写入该文本文件尾：
// 文件 Int_Data.dat 中存放了若干整数，将文件中所有数据相加，
// 并把累加和写入该文件的最后。

#include <stdio.h>

int main() {
    char *path = "Int_Data.dat";
    FILE *fp = fopen(path, "rb+");
    if(!fp) {
        printf("File open error!\n");
        return 0;
    }

    int x, sum = 0;
    while(fscanf(fp, "%d", &x) != EOF) {
        sum += x;
    }
    
    printf("The sum is %d\n", sum);
    fprintf(fp, "\n%d", sum);

    fclose(fp);

    return 0;
}