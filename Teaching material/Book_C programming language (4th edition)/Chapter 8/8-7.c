//字符串排序：输入 5 个字符串，按由小到大的顺序输出。

#include <stdio.h>
#include <string.h>

void selectionSort(char s[][10]) {
    int i, j, i_min;
    char temp[10];
    for(i = 0; i < 4; i++) {
        i_min = i;
        for(j = i + 1; j < 5; j++) {
            if(strcmp(s[i_min], s[j]) > 0) {
                i_min = j;
            }
        }
        if(i_min != i) {
            strcpy(temp, s[i_min]);
            strcpy(s[i_min], s[i]);
            strcpy(s[i], temp);
        }
        
    }
}

int main() {
    char s[5][10];

    int i;    
    for(i = 0; i < 5; i++) {
        printf("Input No.%d's string: ", i + 1);
        // fgets(s[i], sizeof(s[i]), stdin);
        scanf("%s", &s[i]);
    }

    selectionSort(s);
    for(i = 0; i < 5; i++) {
        puts(s[i]);
    }

    return 0;
}