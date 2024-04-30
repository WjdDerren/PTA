// 将实数写入文件：从键盘输入若干实数（以 -1 结束）。

#include <stdio.h>

int main() {
    char ch, *pathTXT = "data12-2.txt";
    FILE *fp = fopen(pathTXT, "w+");
    if(!fp) {
        printf("File open error!\n");
        return 0;
    }

    double x;
    while(scanf("%lf", &x), x != -1) {
        fprintf(fp, "%lf\n", x);
    }

    fclose(fp);

    return 0;
}