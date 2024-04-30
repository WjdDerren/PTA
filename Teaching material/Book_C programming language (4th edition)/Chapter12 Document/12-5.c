// 输出含 for 的行：将文本文件中所包含字符串 for 的行输出。

#include <stdio.h>
#define N 80

int main() {
    char *path = "data12-5.txt";
    FILE *fp = fopen(path, "r");
    if(!fp) {
        printf("File open error!\n");
        return 0;
    }

    char ch[N];
    while(fgets(ch, N, fp) != NULL) {        
        for(int i = 0; ch[i + 3] != '\0'; i++) {
            if(ch[i] == 'f' && ch[i + 1] == 'o' && ch[i + 2] == 'r') {
                printf("%s", ch);
                break;
            }
        }
    }

    fclose(fp);

    return 0;
}