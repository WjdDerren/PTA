#include <stdio.h>
#include <string.h>

int main() {
    char num[25], res[25];
    fgets(num, 25, stdin);
    
    int len_num, len_res, i, j, temp1 = 0, temp2 = 0, sum, digit[10] = {0}, No_flag = 0;
    len_num = strlen(num) - 1;
    len_res = len_num;
    for(i = len_num - 1, j = 0; i >= 0; i--, j++) {
        digit[num[i] - '0']++;
        sum = (num[i] - '0') * 2;
        temp2 = sum / 10;
        res[j] = sum % 10 + temp1 + '0';
        digit[res[j] - '0']--;
        temp1 = temp2;
        if(i == 0) {
            if(temp1 > 0) {
                len_res = len_num + 1;
                No_flag = 1;
                res[j + 1] = sum / 10 + '0';
            }
        }
    }
    res[len_res] = '\0';
    
    if(No_flag == 0) {
        for(i = 0; i <= 9; i++) {
            if(digit[i] != 0) {
                No_flag = 1;
                break;
            }
        }
    }
    if(No_flag == 1) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    for(i = len_res - 1; i >= 0; i--) {
        printf("%c", res[i]);
    }
    123123
    return 0;
}