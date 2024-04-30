// 习题8-7 字符串排序

#include <stdio.h>
#include <string.h>

void selectionSort(char s[][80]) {
    int i, j, i_min;
    char temp[80];
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
    char s[5][80];

    int i;    
    for(i = 0; i < 5; i++) {
        scanf("%s", &s[i]);
    }

    selectionSort(s);
    printf("After sorted:\n");
    for(i = 0; i < 5; i++) {
        puts(s[i]);
    }

    return 0;
}